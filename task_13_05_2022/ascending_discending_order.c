/*c code to sort the array in ascending and discending array*/


#include <stdio.h>
int sort_ascending(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[j] < array[i])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    printf("\n\nAscending order: ");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }
}
int sort_discending(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[j] > array[i])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    printf("\n\ndiscending order : ");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }
}
int main()
{
    int array[] = {1, 3, 4, 5, 1, 7, 6, 9, 10};
    int len = sizeof(array) / sizeof(int);
    sort_ascending(array, len);
    sort_discending(array, len);
    printf("\n");
}