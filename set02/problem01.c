#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height;
//   float result=0;
  input(base,height);
  
  return 0;
  
}
void input(float base, float height)
{
    float area=0;
  printf("input base");
  scanf("%f",&base);
  printf("input height");
  scanf("%f",&height);
  find_area(base,height,&area);
  output(base,height,area);
}
void find_area(float base , float height, float *area)
{
  *area = base*height*1/2;
//   printf("the area of triangle is %f\n",*area);
  
}
void output(float base, float height, float area)
{
  printf("the area of triangle with base %f and height %f is %f",base,height,area);
}
  