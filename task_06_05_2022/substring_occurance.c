#include <stdio.h>
#include <string.h>
int countFreq(char sub_string[], char string[])
{
    int M = strlen(sub_string);
    int N = strlen(string);
    int res = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
        pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (string[i + j] != sub_string[j])
                break;

        if (j == M)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    char string[] = "banananana";
    char sub_string[] = "na";

    printf("%d", countFreq(sub_string, string));
    return 0;
}