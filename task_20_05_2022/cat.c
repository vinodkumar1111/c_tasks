#include <stdio.h>
#include <stdlib.h>
int main()
{
    // system functions
    //  system("shell commands") -> to display the list of all the files in current directory
    system("ls");
    //system(" give shell command with file names")
    //it displays all the content in a file in the terminal
    system("cat file3.txt concatinated_file.c");
    // if there is an error with the command system will return a non-zero value
  if (system("abc") != 0)
    printf("\nError executing command.\n");

    return 0;
}