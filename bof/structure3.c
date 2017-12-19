#include <stdio.h>
#define pr(b,c) printf(#c"= %"#b"\n", c)
#define pr3(b,c,d,e) printf(#c"= %"#b"  "#d"= %"#b"  "#e"= %"#b"\n", c,d,e)

  struct S1{
   char *s;
   struct S1 *s1p;
  };

void swap(struct S1 *, struct S1 *);

int main()
{
  static struct S1 a[] = {
                 {"abcd", a+1},
                 {"efgh", a+2},
                 {"ijkl", a}
  };
  struct S1 *p[3];
  int i;

  for(i=0; i<3; i++) 
    p[i] = a[i].s1p;
  pr3(s, p[0]->s, (*p)->s,  (**p).s);
  printf("\n");
//for (i =0; i<3;i++) 
  // printf("%s",a[i].s);
printf("\n"); 
 swap(*p, a);
//for (i =0; i<3;i++)
  //   printf("%s\n",a[i].s);
printf("\n");
  pr3(s, p[0]->s, (*p)->s,  (*p)->s1p->s);
printf("\n");
  swap(p[0], p[0]->s1p);
//   for (i =0; i<3;i++)
  //   printf("%s\n",(**(p+i)).s);
  pr(s, p[0]->s);
  pr(s, (*++p[0]).s);
for (i =0; i<3;i++)
    printf("%s\n",(p[i]->s));
for (i =0; i<3;i++)
     printf("%s\n",a[i].s);  
pr(s,  ++(*++(*p)->s1p).s);
  
/*If we replace the previous 3 instructions with
  pr3(s, p[0]->s, (*++p[0]).s,  ++(*++(*p)->s1p).s);
  how come we have segmentation fault??
*/

 return 0;
}

void swap(struct S1 *p1, struct S1 *p2)
{
  char *temp;
  temp = p1->s;
  p1->s = p2->s;
  p2->s = temp;
}
