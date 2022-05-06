#include <stdio.h>

void function_factor(int number)

{

    int index = 1;

    printf("Factors of given number:");

    while (index <= number)

    {

        if (number % index == 0)

        {

            printf("%d ", index);
        }

        index++;
    }
}

int main()

{

    int index;

    int number = 12;

    function_factor(number);
    printf("\n");
}