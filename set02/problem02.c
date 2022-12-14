#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene = check_scalene(a,b,c);
  output (a,b,c,isscalene);
  return 0;
}
int input_side(int a, int b, int c)
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c)
{
    int isscalene;
  if (a==b || b==c || a==c)
   {
      isscalene=1;
       
   }
  else
    {
        isscalene=2;
        
    }
  return isscalene;
}
void output (int a,int b,int c, int isscalene)
{
  if(isscalene==1)
  {
  printf("triangle with the side %d,%d,%d is not scalene",a,b,c);
  }
  else
  {

  printf("triangle with the side %d,%d,%d is scalene",a,b,c);
  }
}
