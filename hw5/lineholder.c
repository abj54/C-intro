/*
	Name: Anwesh Joshi
	lineholder.c - Homework 5
	Date: 04/10/2017
*/
/*
	PseudoCode:
	init_lineholder(int n):
		initialize the static variable first, last and end
		(first will point to 0 to N-1 point in the array pointers,
  		last will be the total numbers of line to print
		and end will be total number of lines read)

	insert_line(char * line):
		allocate memory to the line which is length of line + 1 (for the null character)
		keep updating first by taking the remainder when it is divided by last( between 0 to last-1) 
		if end is greater then last
			free the first slot in the array and set it to NULL
		first slot in the lines(array) will point to the memory we alocated 
		increase the counter end
		use strcopy to copy line to 'a' which is the memory we alocated earlier
	
	print_lines():
		if all the slots in array(lines) are not filled
			print each one from first to filled
			free the memory alocated for them
		if the slots are all filled at least once
			increment first
			run the loop n times 
				print the first slot to the last one
				free the memory alocated for them and set it to NULL
				 
*/

#include <string.h>
#include "lineholder.h"
#include <stdio.h> 
#include <stdlib.h>


static char * lines[MAXLEN];
static int first, last, end;

void init_lineholder(int n) {
	last = n;
	first = 0;
	end = 0;
	     
}

void insert_line(char * line) {
	char *a  = (char *) (malloc((strlen(line))+1));
	if (a == NULL) {
		return;
	}
	first = end % last;
	
	if (end >= last) {
		free(lines[first]);
		lines[first] = NULL;
	}
	lines[first] = a;
	++end;
	
	strcpy(a,line);
}

void print_lines() {
	int i,j;
	if (end <= last) {
		printf("%d output lines are:\n",end);
		for (i = 0; i < end; i++) {
			printf("%s",lines[i]);	
	                free(lines[i]);
       	                lines[i] = NULL;
		}
	}
	
	else {
		
		i = first + 1;
		printf("%d output lines are:\n",last);
		for  (j = 0; j < last; j++) {
			i %= last;
			printf("%s",lines[i]);
			free(lines[i]);
			lines[i] = NULL;
			i++;
		}	
	}
}		 



