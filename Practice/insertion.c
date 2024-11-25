

#include <stdio.h>
void insertElements(int arr[], int element, int position, int *size)
{
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main()
{
    int size = 5;
    int positon = 2;
    int ele = 4;
    int arr[10] = {3, 6, 8, 5, 1};
    insertElements(arr, ele, positon, &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
}




// int maxdigit(int arr[], int size)
// {
//     int digit = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (digit < arr[i])
//         {
//             digit = arr[i];
//         }
//     }
//     int value=sizeof(digit);
//     for (int i = 1; i <= value; i++)
//     {
//         digit = i++;
//     }
//     return digit;
// }