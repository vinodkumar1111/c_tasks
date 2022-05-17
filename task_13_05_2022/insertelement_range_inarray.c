/* c code to print the elements of an arry in a given range*/
/* unable to print the index of an element in a given range
(need to modify the code to get index of given element ) */

#include <stdio.h>
void range_element_inarray(int array[], int len, int min, int max)
{
    printf("[");
    for (int i = min; i < max; i++)
    {
        for (int j = 0; j < len; j++)
        {
            array[j] = i;
            printf("%d ", array[j]);
            break;
        }
    }

    printf("]");
    printf("\n");
}
// int find_index(int array[], int len, int min, int max, int element)
// {
//     int index;
//     for (int i = 0; i < len; i++)
//     {
//         if (min > array[i] && max < array[i])
//         {
//             if (array[i] == element)
//             {
//                 printf("%d", i);
//             }
//         }
//     }
// }
int main()
{
    int min = 3, max = 9;
    int array[20];
    int len = sizeof(array) / sizeof(int);
    printf("the elements between %d and %d are \n", min, max);
    range_element_inarray(array, len, min, max);
}