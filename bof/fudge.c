#include <stdio.h>
#define fudge(k)  k+3.14159
#define pr(a) printf("a=%d\t", (int) (a))
#define print(a) pr(a);putchar('\n')
#define print2(a,b) pr(a); print(b)
#define print3(a,b,c) pr(a); print2(b,c)
#define max(a,b) (a<b ? b :a)

int main(void)
{
  {
   int x=2;
   print( x*fudge(2));
  }

  {
   int cel;
   for( cel=0; cel <=100; cel+=50 ) 
    print2( cel, 9./5*cel + 32);
  
  }

  {
   int x=1, y=2;
   print3( max(x++, y), x, y);
   print3( max(x++, y), x, y);
  }
}
