#include<stdio.h>
struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{
Complex a,b,sum;
a=input_complex();
b=input_complex();
sum=add_complex(a,b);
output(a,b,sum);
return 0;
}
Complex input_complex()
{
Complex c;
printf("Enter the Real Part and Imaginary Part of the Complex Number\n");
scanf("%f%f",&c.real,&c.imaginary);
return c;
}
Complex add_complex(Complex a, Complex b)
{
Complex add;
add.real = a.real + b.real;
add.imaginary = a.imaginary + b.imaginary;
return add;
}
void output(Complex a, Complex b, Complex sum)
{
printf("The sum of %.1f+%.1fi and %.1f+%.1fi is %.1f+%.1fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
