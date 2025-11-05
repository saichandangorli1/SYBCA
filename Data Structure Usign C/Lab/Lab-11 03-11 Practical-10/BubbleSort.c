#include <stdio.h>
void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int swaps = 0; // flag to detect any swap is there or not
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            { // when the current item is bigger than next
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps = 1; // set swap flag
            }
        }
        if (!swaps)
            break; // No swap in this pass, so array is sorted
    }
}
int main()
{
    int n;
    n = 5;
    int arr[5] = {67, 44, 82, 17, 20}; // initialize an array
    printf("Array before Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    bubbleSort(arr, n);
    printf("Array after Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
