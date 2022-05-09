#include<stdio.h>
#include<string.h>
void char_separated_delimiter(char string[])
{
    int i=0;
char token=' ';
while(string[i]!='\0')
{
    if(string[i]==token)
    {
        printf("\n");
    }
    else
    {
       printf("%c",string[i]);
    }
    i++;
}
}
int main()
{
    char string[]="how to code";
    char_separated_delimiter(string);
}