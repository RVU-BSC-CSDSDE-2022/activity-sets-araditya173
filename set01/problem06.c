#include <stdio.h>
void comparenumbers(int *a,int *b,int *c);

int main()
{
  int a,b,c;
  printf("input the first number:");
  scanf("%d",&a);
  printf("input the second number:");
  scanf("%d",&b);
  printf("input the third number:");
  scanf("%d",&c);
  comparenumbers(&a,&b,&c);
   return 0;
}
void comparenumbers(int *a,int *b,int *c)
{
  if (a>b && a>c)
    printf("%d is the largest number",a);
  else if (b>a && b>c)
    printf("%d is the largest number",b);
  else if (c>a && c>b)
    printf("%d is the largest number",c);
 
}