#include <stdio.h>

/*
 * C Program to illustrate an array of integers.
 */

int main()
{
    // int ages[5] = {21, 19, 25, 30, 22};
    int ages[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ages[i]);
    }

    printf("--- Original Ages ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Age at index %d: %d\n", i, ages[i]);
    }

    printf("\n--- Accessing a Specific Element ---\n");
    printf("The age of the person at index 2 is: %d\n", ages[2]);

    printf("\n--- Modifying an Element ---\n");
    printf("Original age at index 0: %d\n", ages[0]);
    ages[0] = 23;
    printf("New age at index 0: %d\n", ages[0]);

    printf("\n--- Ages after modification ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Age at index %d: %d\n", i, ages[i]);
    }

    return 0;
}