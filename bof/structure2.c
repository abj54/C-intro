#include <stdio.h>
#define pr(b,c) printf(#c"= %"#b"\n", c)
#define pr3(b,c,d,e) printf(#c"= %"#b"  "#d"= %"#b"  "#e"= %"#b"\n", c,d,e)

int main()
{
  struct S1{
   char *s;
   int i;
   struct S1 *s1p;
  };


  static struct S1 a[] = {
                 {"abcd", 1, a+1},
                 {"efgh", 2, a+2},
                 {"ijkl", 3, a}
  };
  struct S1 *p =a;
  int i,cix;
	
  pr3(s, a[0].s, p->s,  a[2].s1p->s);

  for(i=0; i<2; i++)
  {
    pr(d, --a[i].i);
//    cix = (a[i].s[0])++;
  cix = a[i].s[0];
  cix++;
   pr(c, cix);
    printf("\n");
  }
//for (i=0;i<=2;i++) {
//	printf("%d %s \n",a[i].i,a[i].s);
//}
//  printf("%s",p->s);
//  pr(s,++(p->s));
  pr3(s, ++(p->s), a[(++p)->i].s, a[--(p->s1p->i)].s);
//printf("%s",a[--(p->s1p->i)].s) ; 
//for (i=0;i<=2;i++) {
  //       printf("%d %s \n",a[i].i,a[i].s);
 // }

  return 0;
}
