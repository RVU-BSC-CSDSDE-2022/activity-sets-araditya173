//Write a program to find the length of a line
#include <stdio.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
  Point p1,p2;
p1=input_point();
p2=input_point();  
input_line();
distance=find_length(Line &l);
output(Line l); 
return 0;
}

Point input_point()
  {
    float x1,x2,y1,y2;
    Point p1,p2;
    printf("Enter the coordinates of the p1\n");
    scanf("%f %f,&x1.p1,&y1.p1");
    printf("Enter the coordinates of the p2\n");
    scanf("%f %f,&x2.p2,&y2.p2");
    
  }
  
Line input_line()
  {

  
  }
  
void find_length(Line *l)
  {
    float distance;
    
    
  }
  
void output(Line l)
  {
    
  }