//Check if string start with the substring  
#include<stdio.h>
#include <string.h>
#define true  1
#define false 0
//This function checks if the given string starts with substring or not 
//it returns 1 if yes else 0
int isStartWithSubstr(char *string, char *substring){
    int substringLength = strlen(substring);
    for(int i = 0; i < substringLength; i++)
    {
        if(string[i] != substring[i]){
            return 0;
        }
    }
    return 1;
}
int main()
{   
    // Input string and substring
    char string[] = "vinodkumar";
    char substring[] = "vinod";
    
    if(isStartWithSubstr(string, substring)){
        printf("The String is start with substring- %s",substring);
    }
    else{
        printf("The String is NOT start with %s",substring);
    }
      
    return 0;
}