
/* 
** c program to read the content of a file 
*/

#include<stdio.h>
#include <stdlib.h>
    int main()
{
    FILE *fptr;
    int val;
     fptr = fopen("file1.txt", "r") ;
    if(fptr== NULL)
        
    {
        printf("visible error detected.cannot open the file");
        exit(1);
    }
// do
//     {
//         val = fgetc(fptr);
//         printf("%c", val);

//      Checking if character is not EOF.
//      If it is EOF stop eading.
//     } while (val != EOF);

//      Closing the file

    fscanf(fptr, "%d", &val);
    printf("the value of the integer n is =%d", val);
    fclose(fptr);
    return 0;
}