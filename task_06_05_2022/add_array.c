#include <stdio.h>
void sum_array(int array1[], int sum[], int len1, int array2[], int len2)
{
    int i, j, k;

    int len = len1 = len2;
    for (i = 0, j = 0, k = 0; i < len1, j < len2, k < len1; i++, j++, k++)
    {
        sum[k] = array1[i] + array2[j];
    }
}
void print_array(int array[], int len)

{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {5, 6, 7, 8, 9};
    int len1 = sizeof(array1) / sizeof(int);
    int len2 = sizeof(array2) / sizeof(int);
    int sum[100];
    printf("sum of two arrays\n");
    sum_array(array1, sum, len1, array2, len2);
    print_array(sum, len1);
    return 0;
}