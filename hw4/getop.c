/*
 Name: Anwesh Joshi 
 getop.c - HW4
 03/22/2017
*/

/* 
 * getop.c
 *
 * gets next token: operator or numeric operand
                  : if it's a negative sign, make sure to check for  it as negative number of '-' operation
 */

#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
	;

    s[1] = '\0';

    if (!isdigit(c) && c!='-' )
      return c;  /* not a number */

    /* collect integer part in string s */
    i = 0;
 
   if(c=='-')
          if(isdigit(c=getch()))
              s[++i]=c;
          else
          {
             if(c!=EOF)
                  ungetch(c);
             return '-';
          }       
 
  
      if (isdigit(c))
            while (isdigit(s[++i] = c = getch()))
               ;

    s[i] = '\0';
    if (c != EOF)
      ungetch(c);
    
    return NUMBER;
}


