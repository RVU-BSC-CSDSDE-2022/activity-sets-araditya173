//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
int n,sum;
n=input_array_size();
  int a[n];
input_array( n,  a);
sum=sum_composite_numbers( n,  a);
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
  for (i=0;i<=n;i++)
    {
      printf("%d",a[i]);
    }
  
}
sum_composite_numbers(int n, int a[n])
{
  int sum=0,i,factor,j;
  for (i=0;i<=n;i++)
    {
      for (j=0;j<=a[i];j++)
        {
          if (i%j==0)
          {
            factor=j;
          }
          if (factor>2)
          {
           sum=sum + a[i]; 
          }
  
      
      }
      
    }
  return sum;
  
}
output(int sum)
{
  printf("the sum of n composite number is %d",sum);}