#include <stdio.h>
void print(int);

int main(void)
{
  int x, y, z;
  
  x=y=z=1;
  ++x || ++y && ++z;
  print( x); print(y); print(z);
  
  x=y=z=1;
  ++x && ++y || ++z;
  print( x); print(y); print(z);

  x=y=z=1;
  ++x && ++y && ++z;
  print( x); print(y); print(z);
  printf("\n");

  x=y=z=-1;
  ++x || ++y && ++z; 
  print( x); print(y); print(z);


  x=y=z=-1;
  ++x && ++y || ++z;
  print( x); print(y); print(z);
 
  x=y=z=-1;
  ++x && ++y && ++z;
  print( x); print(y); print(z);
  printf("\n");
  return 0;

}

void print(int x)
{
  printf("int = %d\n", x);
}
