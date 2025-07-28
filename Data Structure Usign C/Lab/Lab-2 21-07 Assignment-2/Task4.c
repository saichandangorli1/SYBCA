
#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n <= 0) {
        return 0; 
    }
    return n + sumOfNaturalNumbers(n - 1);
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    int sum = sumOfNaturalNumbers(n);
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
