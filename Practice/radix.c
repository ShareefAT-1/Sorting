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
void countsort(int arr[], int size, int pos)
{
    int count[10];
    int b[size];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        b[--count[(arr[i] / pos) % 10]]=arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i]=b[i];
    }
    
}
void radixsort(int arr[],int size){
    int max=getmax(arr,size);
    for (int pos=1; max/pos >0; pos*=10)
    {
        countsort(arr,size,pos);
    }
    
}
int main()
{
    int arr[] = {10, 123, 56, 350, 45, 1, 20, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    
}