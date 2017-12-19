#include <stdio.h>
void print(int);

int main(void)
{
  int x,y,z;
  x = 013; y = 012; z = 010; 

  print( x | y & z);
  print( x | y & - z);
  print( x ^ y & - z);
  print( x & y && z);
  printf("\n");

  x =1; y = -1;
  printf("%x",!x);
  print( ! x | x);
  print( - x | x);
  print( x ^ x);
  printf("\n");

  x = x << 3; print(x);
  y = y << 3; print(y);
  y = y >> 3; print(y);
  return 0;

}

void print(int x)
{
  printf("int = %d\n", x);
}
