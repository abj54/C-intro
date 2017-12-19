#include <stdio.h>
#define pr2(c,d) printf(#c"= 0x%x  "#d"= 0x%x\n", c,d)
#define pr3(c,d,e) printf(#c"= 0x%x  "#d"= 0x%x   "#e"= 0x%x\n", c,d,e)
   
int a[]={0 ,1, 2, 3, 4, 5};
int *p[] ={a, a+1, a+2, a+3, a+4, a+5};
int **pp = p;

int main(void)
{
/* Exercise 1 */
 pr2(a, *a);
 pr3(p, *p, **p);
 pr3(pp, *pp, **pp);
 printf("\n");

/* Exercise 2 */
printf("2\n"); 
pp++;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("3\n");
/* Exercise 3 */
 *pp++;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("4\n");
 /* Exercise 4 */
 *++pp;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("5\n");
 /* Exercise 5 */
 ++*pp;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("6\n");
 /* Exercise 6 */
 pp=p;
 **pp++;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("7\n");
 /* Exercise 7 */
 *++*pp;
 pr3(pp-p, *pp-a, **pp);
 printf("\n");
  printf("8\n");
 /* Exercise 8 */
 ++**pp;
 pr3(pp-p, *pp-a, **pp);

 return 0;
}
