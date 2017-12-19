/*
	Name: Anwesh Joshi
	tail.c - Homework5
	Date: 04/10/2017
*/

/*
	Pseudocode:
	find the command line input using the pointer argv
        call the init_lineholder  using command line number
	while there is a next line
 		store the line by calling insert_line
	Call print_lines to print the desired number of lines	
*/
#include <stdio.h>
#include "lineholder.h"

int ggetline(char s[],int lim) // gets a line and returns its length
{
   	int c,i;
   	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
      		s[i]=c;
   	if (c=='\n') {
      		s[i]=c;
      		++i;
   	}
   	s[i]='\0';
   	return i;
}


int main(int argc, char *argv[]) {
	int nline;
	char line[MAXLINE];
	if (argc <= 1) {
		nline = 10;
		printf("Wrong input: So nline = 10\n");
	}
	else if (argc > 1 && *(argv[1]) == '-') {	
		nline = atoi(++argv[1]);
	}
	init_lineholder(nline);
	
	while(ggetline(line,MAXLINE) > 0) {
		insert_line(line);
	}

	print_lines();
	return 1;
}	





