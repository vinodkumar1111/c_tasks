// C program to find the count of positive
// and negative integers in an array

#include <stdio.h>

// Function to find the count of
// positive integers in an array
int count_Positive(int *array, int len)
{
    int pos_count = 0;

    for (int i = 0; i < len; i++)
    {
        if (array[i] > 0)
            pos_count++;
    }
    return pos_count;
}

// Function to find the count of
// negative integers in an array
int count_Negative(int *array, int len)
{
    int neg_count = 0;

    for (int i = 0; i < len; i++)
    {
        if (array[i] < 0)
            neg_count++;
    }
    return neg_count;
}



int main()
{
    int array[] = {2, -1, -5, 6, 0, -3};

    int len = sizeof(array) / sizeof(int);
    for(int i=0;i<len;i++)
    {
    printf("array element -%d =%d\n",i, array[i]);
    
    }
    printf("Count of Positive elements = %d\n", count_Positive(array, len));
    printf("Count of Negative elements = %d\n", count_Negative(array, len));

    return 0;
}
