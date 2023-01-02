//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
int n,a[n],sum;
n=input_array_size();
input_array( n,  a[n]);
sum=sum_composite_numbers( n,  a[n]);
output( sum);
}

int input_array_size()
  {
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    return n;
    
  }

input_array(int n, int a[n])
{
  int i;
  for (i=0;i<n;i++)
    {
      printf("enter a[n]");
      scanf("%d",&a[n]);
    }
  
}
sum_composite_numbers(int n, int a[n])
{
  int sum=0,i;
  for (i=0;i<n;i++)
    {
      sum=sum + a[n];
    }
  return sum;
  
}
output(int sum)
{
  printf("the sum of n composite number is %d",sum);}