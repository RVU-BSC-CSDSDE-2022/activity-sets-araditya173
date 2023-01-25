//Write a program to find the index of a substring of a string.

#include<stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
 char string[100],substring[100]; 
input_string(a, b);
sub_str_index(string, substring);
output(string, substring, index);
  return 0;
  }

void input_string(char* a, char* b)
{
    printf("enter a\n");
    scanf("%s",a);
    printf("enter b\n");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
 char *p;
  int i;
  for (p=string;*p!=NULL;p++)
    {
  for(i=0; substring[i]!='\0',i++)
             if(p[i] != substring[i])
             { 
            break;
             } 
      if (substring[i] == NULL) 
      { 
         return (int) (p - string); 
      } 
   } 
   return -1;
    }
}

void output(char *string, char *substring, int index)
{
  
}