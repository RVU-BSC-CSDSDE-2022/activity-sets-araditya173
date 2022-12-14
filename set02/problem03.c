// Write a program find whether a number is a composite number
// A Composite number has more than 2 factors
// Write a program find whether a number is a composite number
// A Composite number has more than 2 factors
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
  int n,result;
  input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}
int input_number()
{
    int n;
  printf("enter n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int result;
  for(result=1;result<=n;result++)
    {
    if (n%result==0)
      result=result+1;
    }
 
      return result;
    
  
}
void output(int n, int result)
{
   if (result==2)
    printf("%d is not composite",n);
  else
     printf("%d is composite",n);
}
