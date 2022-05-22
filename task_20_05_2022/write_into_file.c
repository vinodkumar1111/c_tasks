
/*
** c program which writes the content into a file
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int val;
    fptr=fopen("file1.txt","w");
    if(fptr==NULL)
    {
        printf("file type is invalid");
        exit(1);
    }
    printf("pleae enter the value:");
    scanf("%d",&val);
    fprintf(fptr,"%d",val);
    fclose(fptr);
    return 0;
}