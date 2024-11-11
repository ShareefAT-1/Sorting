#include <stdio.h>

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       printf("%d",arr[i]);
    }
    
}
int main()
{
    int size;
    int arr[] = {2, 3, 5, 4, 1};
    size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,size);
    print(arr,size);
}