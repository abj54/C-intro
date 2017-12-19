/*
  Name: Anwesh Joshi
  wordcounter.c - hw6
  Date: 04/19/17
*/

/*
	Pseudocode:
	
	main:
	while there is a word to process
		a word is beginning with an alphabet
			insert it to the array of words
	sort the words on the basis of their frequency
	print the words

	compare:
	compare two struct on the basis of their frequence in increasing order

	insert:
	run a loop in the struct array on all its words
		if the word is found
			increase its count
		 	return
	allocate memory for the new word in the array 
	add the new word in the array with frquency 1
	increase the count for total number of words in the array

	print:
	run a loop on all the words in the struct array
		print the word with it's frequency
		free the memory allocated for it

	getword:
	get a word from command line input

	getch:
	getch  returns one  character from stdin  or from the buffer buf if it is not empty
  	
	ungetch:
	ungetch puts one character in the buffer buf 
	

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define NKEYS 5000
#define BUFSIZE 100
#define MAXWORD 30

char buf[BUFSIZE];
int bufp = 0;
int size = 0;

struct key{
	char * word;
	int count;
} keytab[NKEYS];

int getword(char *word, int lim) {
	int c, getch(void);
 	void ungetch(int);
 	char *w = word;
 	while (isspace(c = getch()))
 		;
 	if (c != EOF)
 		*w++ = c;
 	if (!isalpha(c)) {
 		*w = '\0';
 		return c;
 	}
 	for ( ; --lim > 0; w++)
		if (!isalnum(*w = getch())) {
 		ungetch(*w);
 		break;
	 }	
 	*w = '\0';
 	return word[0];
}

int getch() {
	return (bufp > 0) ? buf[--bufp]:getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many chars\n");
	else
		buf[bufp++] = c;
}

void print() {
	int i = 0;
	for ( i = 0; i < size; i++) {
		printf("%15s\t%3d\n",keytab[i].word,keytab[i].count);
		free(keytab[i].word);
		keytab[i].word=NULL;
	}
}

void insert(char * newword) {
	int i = 0;
	for (i = 0; i < size; i++) {
		if (strcmp(newword,keytab[i].word)==0) {
			++keytab[i].count;
			return;
		}
	}
	keytab[size].word = (char *) malloc(strlen(newword)+1);
	strcpy(keytab[size].word,newword);
	keytab[size].count = 1;
	size++;
	
}
int compare(struct key * p,struct key * q){
	return (p->count-q->count);
}

int main() {
	char word[MAXWORD];	
	while (getword(word,MAXWORD)!=EOF) {
		if (isalpha(word[0]))
			insert(word);
	}
	qsort(keytab,size,sizeof(struct key),(int(*)(const void *, const void *))compare);
	print();
	return 1;
}


