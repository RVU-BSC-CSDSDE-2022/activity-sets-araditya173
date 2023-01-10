//Write a program to check if the given number is prime
#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n,result;
n=input_number();
result=is_prime( n);
output( n, result);
  return 0;
}

int input_number()
{
int n;
  printf("enter number\n");
  scanf("%d",&n);
  return n;
  
}
int is_prime(int n)
{
  int result=0,i;
  if (n==1 || n==0)
  {
    result==1;
  }
  for (int i=2;i<=n/2;i++)
    {
    if (n%i==0)
    {
     result=1; 
      break;
    }
      else{
        result =0;
        
      }
    }
  return result;
}
void output(int n, int result)
{
  if (result==1)
  {
    printf("the given number is not prime");
  }
  else
  {
    printf("the given number is a prime number");
  }
}