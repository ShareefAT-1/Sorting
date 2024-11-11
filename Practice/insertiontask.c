#include <stdio.h>
int main()
{
    int arr[] = {10, 4, 12, 5, 7, 6, 2};
    int size = sizeof(arr) / sizeof(arr)[0];
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
     printf("Sorted Array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
}