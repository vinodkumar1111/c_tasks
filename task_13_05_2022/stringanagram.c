
/*c code to check whether the given string is anagarm or not*/

#include <stdio.h>
#include <string.h>

void sort(char str1[], int len1)
{
    for (int i = 0; i < len1; i++)
    {
        for (int j = i + 1; j < len1; j++)
        {
            if (str1[i] > str1[j])
            {
                int temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }   
    }
}
int check_anagram(char str1[], int len1, char str2[], int len2)
{
     
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

int main()
{
    char str1[] = "silent";
    char str2[] = "listen";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    sort(str1, len1);
    printf("%s\n", str1);
    sort(str2, len2);
    printf("%s\n", str2);
    check_anagram(str1, len1, str2, len2);
    printf("%s and %s are anagrames",str1,str2);
    return 0;
}