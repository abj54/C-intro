#include <stdio.h>
#define pr(b) printf("%d\n", b)

int main(void)
{
  int a[] = {0, 1, 2, 3, 4};
  int *p;
  int i;

  for (i=0; i <= 4; i++)
    pr(a[i]);

  printf("\n");

  for (p=&a[0]; p <= &a[4]; p++)
    pr(*p);
 
  printf("\n");

  for (p=&a[0], i=0; i <= 4; i++)
    pr(p[i]);

   printf("\n");

   for (p=a, i=0; p + i <= a +4; i++)
     pr(*(p+i));

  for (i=0;i<=4;i++)
	pr(*(p++));
   return 0;
}
