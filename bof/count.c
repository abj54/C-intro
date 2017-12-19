/* Program to count number of bytes in a file */
/* run this program with redirection  ./count <input */
/* Ron Cheung 9/28/2016 */

#include <stdio.h>

int main(void){
  int m=0;
  while(getchar() != EOF)
    m++;
  printf("number of chars=%d\n", m);
  return 1;
}

