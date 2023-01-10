#include<stdio.h>
void input_string(char *string1, char *string2);
int compare(char *string1, char *string2);
void output(char *string1, char  *string2, int result);
int main()
{
char string1[100],string2[100];
input_string(string1,string2);
int result;
result=compare(string1,string2);
output(string1,string2,result);
return 0;
}
void input_string(char *string1, char *string2)
{
printf("Enter String-1\n");
scanf("%s",string1);
printf("Enter String-2\n");
scanf("%s",string2);
}
int compare(char *string1, char *string2)
{
int i,j,k;
int stop;
int count1=0,count2=0,result=0;
for (i=0;string1[i]!='\0';i++){}
for (j=0;string2[j]!='\0';j++){}
if (i<j){stop=j;}
else{stop=i;}
for (k=0;k<stop;k++)
{
if (string1[k]>string2[k])
{
count1 = count1+1;
if (count1>count2){result=1;}
}
else if (string2[k]>string1[k])
{
count2 = count2 + 1;
if (count2>count1){result=2;}
}
else if (string1[k]==string2[k])
{
count1=count1;
count2=count2;
}
}
return result;
}
void output(char *string1, char *string2, int result)
{
if (result==1){printf("%s is greater than %s\n",string1,string2);}
else if (result==2){printf("%s is greater than %s\n",string2,string1);}
else if (result==0){printf("Both Strings are equal\n");}
}
