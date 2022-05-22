/*
** c programe to copy the content of one file to another file
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fptr1, *fptr2;

  
  fptr1 = fopen("source_file.c", "r");
  fptr2 = fopen("destination_file.c", "w");
  
  if (fptr1 == NULL || fptr2 == NULL)
  {
    printf("Error opening file(s).\n");
    return 1;
  }
  // copies the content of one file to another file
  char c;
  while ( (c = fgetc(fptr1)) != EOF )
    fputc(c, fptr2);
  // closes the files when the operation is done
  fclose(fptr1);
  fclose(fptr2);
  return 0;
}