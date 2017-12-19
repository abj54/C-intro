/* 
  showxbits.c - Homework 3
  Name: Anwesh Joshi
  Date: 03/06/2017
*/ 



/*
 *  stub driver for functions to study integer-hex conversions
 *
 */

/* PseudoCode:
	Create an array hexstring with size 2*sizeof(int)+1
	while the input is not EOF or non-integer
		use itox to store hexadecimal strings for n in hexstring
		use xtoi to convert that hexstring back to integer
		print the input integer in hexadecimal using /X, the hexstring array and the integer value that we got from xtoi
*/     

#include <stdio.h>
#include "xbits.h"
#define SPACE 2*(sizeof(int))+1

int main() {
  int n;
  int m = 0;
  char hexstring[SPACE];
  while (scanf("%d",&n)==1) {
	itox( hexstring, n); 
	m= xtoi(hexstring);
	printf("input number  = %d and hexstring = %s and back to integer = %d\n", n,hexstring, m);
  }
  return 0;  
}


