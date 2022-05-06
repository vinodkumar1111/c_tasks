#include <stdio.h>
void reverse(int *array, int len) // function prototype
{
    int *min = array;
    int *max = array + len - 1;
    while (min < max)
    {
        int temp = *min;
        *min = *max; // swapping the min of array and max of arrray
        *max = temp; // using third variable called temp
        min++;
        max--;
    }
}
void array_print(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *array++);
    }
}

int main()
{
    int array[] = {3, 1, 4, 1, 5, 6, 7, 5, 9}; // unsorted array
    int len = sizeof(array) / sizeof(int);     // calulates the length of ana array
    printf("The elements of an array are:\n");

    array_print(array, len); // function call

    reverse(array, len); // function call

    printf("\n");

    printf("The reversed elements of an array are:\n");

    array_print(array, len);

    printf("\n");
    return 0;
}