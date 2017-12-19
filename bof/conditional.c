#include <stdio.h>
void print(int);

int main(void)
{
  int x=1,y=1,z=1;
  
  x += y += z;
  print( x < y ? y :x);
  
  print( x > y ?x ++ : y++);
  print( x); print(y);
  
  print( z += x < y ? x ++ : y++);
  print(y); print(z);

  x =3; y =z=4;
  print((z >= y >= x) ? 1 :0);
  print( z >= y && y >=x );
  printf("\n");

  return 0;

}

void print(int x)
{
  printf("int = %d\n", x);
}
