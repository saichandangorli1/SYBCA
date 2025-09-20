#include <stdio.h>

/*
 * Write a C program to enter N numbers and find and display the minimum number among the entered numbers.
 */

int main()
{
    int number1 = 25;
    int number2 = 12;
    int number3 = 38;
    int number4 = 7;
    int number5 = 19;

    int minimumNumber;

    minimumNumber = number1;

    if (number2 < minimumNumber)
    {
        minimumNumber = number2;
    }

    if (number3 < minimumNumber)
    {
        minimumNumber = number3;
    }

    if (number4 < minimumNumber)
    {
        minimumNumber = number4;
    }

    if (number5 < minimumNumber)
    {
        minimumNumber = number5;
    }

    printf("The numbers are: %d, %d, %d, %d, %d\n", number1, number2, number3, number4, number5);
    printf("The minimum number among these is: %d\n", minimumNumber);

    return 0;
}