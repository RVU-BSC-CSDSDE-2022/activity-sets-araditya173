#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long a, b, sum;
   printf(" Input the first number : ");
   scanf("%d", &a);
   printf(" Input the second  number : ");
   scanf("%d", &b);   
   sum = addTwoNumbers(&a, &b);
   printf(" The sum of %d and %d  is %d\n\n", a, b, sum);
   return 0;
}
long addTwoNumbers(long *c, long *d) 
{
   long sum;
   sum = *c + *d;
   return sum;
}