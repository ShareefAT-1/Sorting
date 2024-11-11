#include <stdio.h>
void deleteElements(int arr[],int position, int *size)
{
    for (int i = position; i <*size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main(){
    int size = 6;
    int positon = 2;
    int arr[10] = {3, 6, 4, 8, 5, 1};
    deleteElements(arr, positon, &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
}