/* Program to demonstrate escape sequences *
   Ron Cheung 9/16/2016
*/

#include <stdio.h>
int main(void)
{
  printf("\e[1;31mHello\e[32m, \e[36mBlue \e[32mWorld\e[0m.\n");
  printf("\e[33;44mHello Blue World\e[0m.\n");
  return 0;
}
