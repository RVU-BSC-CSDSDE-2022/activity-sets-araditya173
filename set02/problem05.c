//Write a program to find GCD _(HCF)_ of two numbers.

#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
input();
gcd=find_gcd( a,  b);
output( a,  b,  gcd);
}
int input()
{
  int a,b;
  printf("enter a\n");
  scanf("%d",&a);
  printf("enter b\n");
  scanf("%d",&b);
  
}
int find_gcd(int a, int b)
{ 
  int i,gcd,min;
  if (a>b)
  {
    min=b;
    }
  else 
  {
    min=a;
  }
for (i=1;i<+min;i++)
  {
  if (a%i==0 && b%i==0)
  {
    gcd=i;
  }
  }
return gcd;
  
}
void output(int a, int b, int gcd)
{
 printf("the hcf of %d and %d is %d",a,b,gcd); 
}