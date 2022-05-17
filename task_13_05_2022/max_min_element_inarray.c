/*c code to find the max and min element in an array*/

#include <stdio.h>
int max_array_num(int array[], int len)
{
    int max_element = array[0];
    for (int i = 1; i < len; i++)
    {
        if (array[i] > array[0])
        {
            max_element = array[i];
        }
    }
    return max_element;
}
int mini_array_num(int array[], int len)
{
    int mini_element = array[0];
    for (int i = 0; i < len; i++)
    {
        if (array[i] < array[0])
        {
            mini_element = array[i];
        }
    }
    return mini_element;
}
int find_index(int array[], int len)
{
    int element = 8, index;
    for (int i = 0; i < len; i++)
    {
        if (array[i] == element)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int array[] = {3,2,5,6,3,8};
    int len = sizeof(array) / sizeof(int);
    printf("%d is a max element found at %dth index in an array \n", max_array_num(array, len), find_index(array, len));
    printf("%d is the minimum element in an array\n", mini_array_num(array, len));
}