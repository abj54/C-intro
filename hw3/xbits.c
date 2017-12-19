/*
 xbits.c - hw3
 Name: Anwesh Joshi
 Date: 03/06/2017
*/

/*
 *  stubs for functions to study
 *  integer-hex conversions
 *
 */

/*
 PseudoCode:
   	For itox:
		do
			store the remainder after dividing n by 16
			change the remainder to character value using different if-statements
			store that value to the array hexstring
		repeat if n/16 is not 0
		make the last character in array as terminating 0 i.e.'\0'
  		Reverse the hexstring
		print the integer and the hexstring array
	
	  

	
	For xtoi:
		for all characters in hexstring until \0 is obtained
			change the character value to int value 'r' for valid characters or else break the loop
			change it to integer value by multiplying the result (0 at starting point) by 16 and adding the int value 'r'
		print the hexstring array and the result
		return the result		   
	
*/

#include <stdio.h>
#include "xbits.h"

/* function represents the int n as a hexstring which it places in the
hexstring array */

void itox( char hexstring[], int n) {
	printf("in itox, processing %d\n",n);
	int r,p,q,m,z;
	char k;
	z = 2*(sizeof(int))+1;
	m=0;
	do {
		r = n%16;
		if (r >= 10 && r <=15)
			k='A' +r -10;
		else
			k= r+'0';
		hexstring[m++]=k;
	} while ((n/=16)!=0);
	for (p=m;p<z-1;++p) {
		hexstring[p]='0';
	}
	hexstring[z-1]='\0';
	for (q=0;q<(z-1)/2;++q) {
		k=hexstring[q] ;
		hexstring[q]=hexstring[z-q-2];
		hexstring[z-q-2]=k;			
   	}
}

/* function converts hexstring array to equivalent integer value  */

int xtoi( char hexstring[]) {
	printf("in xtoi, processing %s\n",hexstring);
	int m,a,r;
	char k;	
	a = 0;		
	for (m=0;hexstring[m]!='\0';++m) {
		k=hexstring[m];			
		if (k >= 'A' && k <= 'F' )
			r= k - 'A' +10;  
		else if (k>='0' && k<='9')
			r=k-'0';
		else
			break;
		a = 16*a +r;
	}
	return a;
}

