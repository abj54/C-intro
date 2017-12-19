/* 
trim.c - Homework 2
Name: Anwesh Joshi
Date: 02/15/2017

Pseudo Code:
while there is still a line to process
	for each character starting at the end of the line
		find the first non blank character or the beginning of the line
		if a non-blank character is found
			add an eol and terminating zero 
			and print it out
*/

#include <stdio.h>
#define MAXLINE 1000

int ggetline(char s[],int lim) // gets next line with its length 
{
	int c,i;
	for (i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i]=c;
	if (c=='\n') {
		s[i]=c;
    		++i;
  	}
	s[i]='\0';
	return i;
}

int main()
{
  	int i,len;
  	char line[MAXLINE];
  	while ((len=ggetline(line,MAXLINE))>0) {
     		for (i=len-1; i>=0 ;--i) {
			if (line[i]!='\n' &&  line[i]!=' ' && line[i]!='\t' ) {
    				line[i+1]='\n';
				line[i+2]='\0';
     		                printf("%s",line);
				break;
      			} 
		}
 	 }	
  	return 0;
}
