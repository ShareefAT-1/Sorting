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
void counting(int arr[], int size)
{
    int max = getmax(arr, size);
    int count[max + 1];
    int b[size];
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
}
int main()
{
    int arr[] = {10, 1, 5, 4, 20, 5, 10, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    counting(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
    printf("Lowest Value is : %d",arr[0]);
    printf("\n");
    printf("Highest Value is : %d",arr[size-1]);
}