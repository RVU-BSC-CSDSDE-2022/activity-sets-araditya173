//Write a C program to find the sum of 2 complex numbers
#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
  Complex a,b,sum=0;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a, b, sum);
    return 0;
}
input_complex()
{
  Complex n;
  printf("input the real part\n");
  scanf("%d",&n.real);
  printf("input the imaginary part\n");
  scanf("%d",&n.imaginary);
  return n;
}
add_complex(Complex a, Complex b)
{
 Complex sum=0;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
output(Complex a, Complex b, Complex sum)
{
 printf("Therefore the complex number is %f + i%f",sum.real,sum.imaginary); 
  
}
