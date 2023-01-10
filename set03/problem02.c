//Write a program to find whether the given 3 points form a triangle
#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
  float x1,x2,x3,y1,y2,y3,result;
input_triangle( &x1, &y1, &x2, &y2, &x3, &y3);
result=is_triangle( x1,  y1,  x2,  y2, x3,  y3);
output( x1,  y1,  x2,  y2, x3,  y3,  result);
  return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter x1\n");
  scanf("%f",x1);
  printf("enter x2\n");
  scanf("%f",x2);
   printf("enter x3\n");
  scanf("%f",x3);
   printf("enter y1\n");
  scanf("%f",y1);
   printf("enter y2\n");
  scanf("%f",y2);
   printf("enter y3\n");
  scanf("%f",y3);
  return 0;
  
  
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float result;
  result=(1/2*((x1*(y2-y3))+x2*(y3-y1)+x3*((y1-y3))));
  return result;
 
  
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
if (result>0)
{
  printf("the given points forms the triangle");
}
  else
{ 
 printf("the given points doesnt forms the triangle"); 
}
}