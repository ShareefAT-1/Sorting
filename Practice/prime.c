// #include <stdio.h>
// int main()
// {
//     int n,num = 0;
//     printf("Enter A Number: ");
//     scanf("%d", &n);
//     for (int i = 2; i <= n/2; i++)
//     {
//         if (n % i == 0)
//         {
//             num++;
//         }
//     }
//     if (num == 0 && n != 1)
//     {
//         printf("Is A Prime Number");
//     }
//     else
//     {
//         printf("Is Not A Prime Number");
//     }
//     // return 0;
// }










#include <stdio.h>
void insertelements(int arr[], int element, int position, int *size)
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
    insertelements(arr, ele, positon, &size);
    for (int i = 0; i < size; i++)
    {
        printf("hello");
    }
}