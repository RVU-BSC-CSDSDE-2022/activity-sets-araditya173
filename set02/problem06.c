//Write a program to reverse a string.

#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
 char str[100],rev_str[100];
 input_string(str);
 str_reverse( str,  rev_str);
 output(str,  rev_str);
  return 0;
}
void input_string(char *a)
{
  printf("enter a\n");
  scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
  int begin,end,count=0;
  while (str[count] != '\0')
    {
      count++;
        end=count-1;
    }
  for (begin = 0; begin < count; begin++)
    {
     rev_str[end]=str[begin];
    end--;
    
    }
    rev_str[begin]='\0';
}
void output(char *a, char *reverse_a)
{
  printf("the reverse of %s is %s", a, reverse_a);
}