/* Program to show ascii values of cntrl characters */
/* enter into the program cntrl-A or B or C or D etc..*/
/* Ron Cheung 9/28/2016 */

#include <stdio.h>
int main(void){
  int c;
  while(c=getchar()) 
   printf("ascii value in hex=%x\n", c);
}

