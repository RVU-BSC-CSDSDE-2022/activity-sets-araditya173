//Write a C program to find the [square root]
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
}
float input()
{
  float n;
  printf("input the number\n");
  scanf("%f",&n);
  return n;
  
}
float square_root(float n)
{
  float temp=0,sqrroot;
  //sqrroot = n/2;
  while(sqrroot!=temp)
    {
      temp=sqrroot;
      sqrroot=(n/temp+temp)/2;
      return sqrroot;
    }
  
}
void output(float n, float sqrroot)
{
  printf("The square root of %f is %f\n",n,sqrroot);
  
}