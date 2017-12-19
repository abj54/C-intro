/*
Name :Anwesh Joshi
main.c - HW 4
Date: 03/22/2017
*/

/*
 * main.c
 *
 * reverse polish calculator
 */
/*
  Added the required bitwise oeprations on the provided code to make sure it works.
*/

#include <stdio.h>
#include "calc.h" /* header file */
#include <math.h>
#include <stdlib.h>

#define MAXOP 100

main()
{
  int type;
  int op2;
  char s[MAXOP];
   
  while ((type = getop(s)) != EOF) 
    {
      switch(type) 
	{
	case NUMBER:
	  push(atoi(s));
	  break;
	case '+':
	  push(pop() + pop());
	  break;
	case '*':
	  push(pop() * pop());
	  break;
	case '-':
	   
	  op2 = pop();
	  
	  push(pop() - op2);
	  break;
	case '/':
	  op2 = pop();
	  if (op2 != 0)
	    push(pop() / op2);
	  else 
	    {
	      printf("error : zero divisor\n");
	      exit(1);
	    }
	  break;
	case '^':
          push(pop() ^ pop());
	  break;
	case '%':
	  op2 = pop();
	  if (op2 != 0)
		push(pop() % op2);
		
	  else {
		printf("remainder when divided by zero\n"); 
		exit(1);
	  }
	  break;
	case '~':
           push(~pop());
           break;			
	case '\n':
	  printf("The answer is %d.\n", pop());
	  break;
	default:
	  printf("error: unknown command %s\n", s);
	  exit(1);
	}
    }
}
