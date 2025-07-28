
#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}
int main()
{
    int start, end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        printf("Invalid interval. Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}