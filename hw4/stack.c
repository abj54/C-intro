/*
 Name : Anwesh Joshi
 stack.c - HW4
 Date: 03/22/2017
*/

/*
 * stack.c
 *
 * stack routines
 */
/*
  Push: Push number in the stack
  Pop: Pop the top value of the stack
*/

#include <stdio.h>
#include "calc.h"
#define MAXVAL 100  /* maximum depth of val stack */

/* even better, we could make the following two defines "static"
   and thus hide these data structures from the rest of the sources */
static int sp = 0;         /* next free stack position */
static int val[MAXVAL]; /* value stack */


/* push: push f onto value stack */
void push(int f)
{
    if (sp < MAXVAL)
	val[sp++] = f;
    else
	printf("error: stack full, can't push %d\n", f);
}

/* pop: pop and return top value from stack */

int pop(void)
{
    if (sp > 0)
	return val[--sp];
    else
      {
	printf("error: stack empty\n");
	return 0;
      }
}

