//Write a program to find the triangle with smallest area in n given triangles.

#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
  Triangle n,t[n],smallest;
n=input_triangle();
input_n_triangles( n,  t[n]);
find_area( &t);
find_n_areas( n,  t[n]);
smallest=find_smallest_triangle( n,  t[n]);
output( n,  t[n],  smallest);
  }
Triangle input_triangle()
{
  Triangle n;
  printf("enter the base and height\n");
  scanf("%f %f",&n.base,&n.altitude);
  
}
void input_n_triangles(int n, Triangle t[n])
{
  Triangle n,t[n],i;
  for (i=0;i<n;i++)
    {
      printf("enter the value of n triangles:\n");
      scanf("%d",t[i]);
    }
}
void find_area(Triangle *t)
{
   float area;
  t->area=(0.5)*(t->base)*(t->height);
  
}
void find_n_areas(int n, Triangle t[n])
{
  Triangle n,i,t[n];
  for (i=0;i<n,i++)
    {
    printf("enter the areas:\n");
    scanf("%f",&t.area[i]);
    }

  
}
find_smallest_triangle( n,  t[n])
{
Triangle smallest;
  smallest=t.area[0];
  for (i=0;i<n,i++)
    {
    if (t.area[i]<smallest)
    {
      smallest=t.area[i];
    }
    }
  return smallest;
  
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("the area of n triangles are: %f",t.area[i]);
  printf("the smallest triangle of all is %f \n",smallest);
}