/*c code to count the frequency of all elements in an array,count_even,count_odd*/

#include <stdio.h>
int count_frequency(int array[], int len)
{
    int fr[len];
    int visited = -1;

    for (int i = 0; i < len; i++)
    {
        int count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                // To avoid counting same element again
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
    }
    for (int i = 0; i < len; i++)
    {
        if (fr[i] != visited)
        {
            printf(" element- %d= %d times\n", array[i], fr[i]);
        }
    }
}
int count_even(int array[], int len)
{
    int count_even = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            count_even++;
        }
    }
    return count_even;
}
int count_odd(int array[], int len)
{
    int count_odd = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}


    int main()
    {
        int array[] = {1, 2, 4, 2, 3, 1, 3};
        int len = sizeof(array) / sizeof(int);
        int even_count = 0;
        count_frequency(array, len);
        printf("\n Total Number of Even Numbers in this Array = %d\n ", count_even(array, len));
        printf("\n Total Number of odd Numbers in this Array = %d\n ", count_odd(array, len));
        printf("\n");
        return 0;
    }