/*
reverse.c - Homework 2
Name: Anwesh Joshi
Date:02/15/2017

Pseudo Code:
find length of the string to reverse
	for each character from the beginning of the string to half way
	     copy the character here to a holding variable
	     copy the character the same distance from end to here
	     copy the holding variable to the same distance from end


*/

# include <stdio.h>
# define MAXLINE 1000


int ggetline(char line[],int maxline);
int reverse(char m[],int k);

main()
{
	int len,size;
	char line[MAXLINE];
	char rline;
  	while ((len=ggetline(line,MAXLINE))>0) {  
      		reverse(line,len);
      		printf("%s\n",line);
 	 }	
  	return 0; 
}

int reverse(char m[],int length) // reverses a string from its mid position
{
 	int i;
 	char temp;
  	for (i=0;i<length/2;++i) {
    		temp=m[i];
    		m[i]=m[length-1-i];
    		m[length-i-1]=temp;
	}	
 	return 0;
}
   


int ggetline(char s[],int lim) // gets a line and returns its length
{
   	int c,i;
   	for (i=0; i<lim-1 &&(c=getchar())!=EOF && c!='\n';++i)
      		s[i]=c;
   	if (c=='\n') {
      		s[i]=c;
      		++i;
   	}
   	s[i]='\0';
   	return i;
}

