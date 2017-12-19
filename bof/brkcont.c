#include "stdio.h"
char input[] = "SSSWILTECH1\1\11W\1WALLMP1";

int main(void)
{
  int i, c;
  for (i=2; (c=input[i]) != '\0'; i++){
    switch (c) {
    case 'a':  putchar('i');
               continue;

    case '1':  break;

    case 1:    while ((c=input[++i]) != '\1' && c != '\0') ;

    case 9:    putchar('X');

    case 'E':
    case 'L':  continue;
  
    default:   putchar(c);
               continue;
    }
    putchar(' ');  
  }
  putchar('\n');
}
