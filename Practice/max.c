#include <stdio.h>
int getmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int getlow(int arr[], int size)
{
    int low = arr[0];
    for (int j = 0; j < size; j++)
    {
        if (low > arr[j])
        {
            low = arr[j];
        }
    }
    return low;
}
void countSort(int arr[], int size)
{
    int max = getmax(arr, size);
    int b[size];
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
       
    }
    printf("Sorted Array : ");
    for (int i = 0; i < size; i++)
    {
       printf("%d,",arr[i]);
    }
    
} 
int main()
{
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, size);
}





// int max = getmax(arr, 8);
    // // printf("%d", max);
    // // printf("\n");
    // int low = getlow(arr, 8);
    // printf("%d", low);