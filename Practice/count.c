// #include <stdio.h>
// int count(int arr[], int j, int k)
// {
//     // int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < 5; i++)
//     {
//         int v = 1;
//         if (arr[i] % 2 == 0)
//         {
//             v = 1;
//         }
//         else
//         {
//             v = 0;
//         }
//         if (v==1)
//         {
//            for (int j = 1; j < 5; j++)
//             {
//                 j = v;
//             }
//         }
//         if
//     }
//     return j,k;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     count(arr, 0, 0);
//     for (int j = 0; j < 5; j++)
//     {
//          printf("Even Numbers In Array : %d", j);
//     }
//     for (int k = 0; k < 5; k++)
//     {
//          printf("Even Numbers In Array : %d", k);
//     }

// }

#include <stdio.h>
int count(int arr[], int size, int evencount, int oddcount)
{
    // int size = sizeof(arr) / sizeof(arr[0]);
    evencount = 0;
    oddcount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("Even Count Is :%d", evencount);
    printf("\n");
    printf("Odd Count Is :%d", oddcount);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    count(arr, 5, 0, 0);
}