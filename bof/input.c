/* Program to print ascii value of a character */
/* Ron Cheung 9/16/2016 */

#include <stdio.h>

int main(void){
  int m=0;
  while((m=getchar()) != EOF)
    printf("char=%c  ascii value in decimal=%d  in hexadecimal=%x\n", m, m, m);
  return 0;
}

