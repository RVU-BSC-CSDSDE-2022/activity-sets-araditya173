//Write a program to reverse a string.

#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  char a,str,rev_str,reverse_a;
 input_string( &a);
 str_reverse( &str,  &rev_str);
 output( &a,  &reverse_a); 
}
void input_string(char *a)
{
  printf("enter a\n");
  scanf("%s",&a);
}
void str_reverse(char *str, char *rev_str)
{
  int l,i,ch;
  char a;
  l=strlen(a);
  str=l;
  rev_str=l;
  for (i=0;i<l-1;i++)
    {
    rev_str++;
    }
  for (i=0;i<l/2;i++)
    {
      ch=rev_str;
      rev_str=str;
        str=ch;
      str++;
        rev_str--;
        
      
    }
  char a[100]="";
  printf("enter a string:%s \n",a);
  reverseString(a);
    return 0;
  
  
}
void output(char *a, char *reverse_a)
{
  
}