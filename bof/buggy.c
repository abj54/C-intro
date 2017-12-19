/* Program to demonstrate C debugging techniques */
/* Find fatal errors using: */
/*    1. printf */
/*    2. gdb */
/* Xiaohui 2/13/2017 */

#include <stdio.h>
int data[10000];
int compute(int);

int main(void)
{
  int i,j;
  for (i=10000; i>=0; i--)
  {
    data[i] = compute(i);
  }
  return 0;
}

int compute(int j)
{ 
 int temp[50];
 temp[j] = 1000/j;
 return temp[j];
}

