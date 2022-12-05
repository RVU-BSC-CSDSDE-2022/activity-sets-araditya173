#include <stdio.h>
int main()
{
  int a=20, b=30, c=40;
  if (a>c && a>b)
    printf("a is the largest integer");
  else if (b>c && b>a)
    printf("b is the largest integer ");
  else if (c>a && c>b)
    printf("c is the largest integer");
  return 0;
}