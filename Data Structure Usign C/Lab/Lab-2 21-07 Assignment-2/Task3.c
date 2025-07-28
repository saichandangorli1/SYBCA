

#include <stdio.h>
#define MAX_SIZE 100
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        largest = MAX(largest, arr[i]);
    }
    return largest;
}
int main() {
    int arr[MAX_SIZE], size;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, size);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
