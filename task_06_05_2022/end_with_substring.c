//Check if string ENDS with the substring  
#include<stdio.h>
#include <string.h>
#define true  1
#define false 0
//This function checks if the given string ends with substring or not 
//it returns 1 if yes else 0
int isEndWithSubstr(char *string, char *substring){
    int substringLength = strlen(substring);
    int j = strlen(string);                     //Length of input string
    for(int i = substringLength - 1; i >= 0; i--)//Traversing from end of the substring
    {
        if(string[j-1] != substring[i]){
            return 0;
        }
        j--;
    }
    return 1;
}
int main()
{   
    // Input string and substring
    char input_string[] = "vinodkumar";
    char substring[] = "kumar";
    
    if(isEndWithSubstr(input_string, substring)){
        printf("The String ends with substring");
    }
    else{
        printf("The String does not end with %s",substring);
    }
      
    return 0;
}