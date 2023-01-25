//Write a program to find nth number in fibonacci sequence.
//Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...

#include <stdio.h>


int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n;
n=input();
  int fibo;
fibo=find_fibo( n);
output( n,  fibo);
  return 0;
}

int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
    return n;
  
}
int find_fibo(int n)
{
  int t1,t2,fibo,i;
  t1=0,t2=1;
  printf("%d,%d\n",t1,t2);

  for (i=2;i<=n;i++)
    {
      fibo=t1+t2;
      t1=t2;
      t2=fibo;
    }
  return fibo;
  
}
void output(int n, int fibo)
{
 printf("the %d fibonacci is %d",n,fibo); 
}