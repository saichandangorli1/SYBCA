
#include <stdio.h>
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i; 
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            { 
                minIndex = j;
            }
        }
       
        if (minIndex != i)
        {
            int temp;
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
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
    selectionSort(arr, n);
    printf("Array after Sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}