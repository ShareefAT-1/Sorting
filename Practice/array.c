#include <stdio.h>
int main() {
    int arr[5];
    int n ;
    printf ("Enter A Number :" );
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]%2==0)
        {
           printf("%d",arr[i]);
        }

    }

//     #include <stdio.h>
// void merge(int arr[], int l, int mid, int r)
// {
//   int i = l;
//   int j = mid + 1;
//   int k = l;
//   int b[r - l + 1];

//   while (i <= mid && j <= r)
//   {
//     if (arr[i] <= arr[j])
//     {
//       b[k] = arr[i];
//       i++;
//       k++;
//     }
//     else
//     {
//       b[k] = arr[j];
//       j++;
//       k++;
//     }
//     while (i <= mid)
//     {
//       b[k] = arr[i];
//       i++;
//       k++;
//     }
//     while (j <= r)
//     {
//       b[k] = arr[j];
//       j++;
//       k++;
//     }

//     for (int i = l; i < r; i++)
//     {
//       arr[i] = b[i];
//     }
//   }
// }
// void mergeSort(int arr[], int l, int r)
// {
//   if (l < r)
//   {
//     int mid = (l + r) / 2;
//     mergeSort(arr, l, mid);
//     mergeSort(arr, mid + 1, r);

//     merge(arr, l, mid, r);
//   }
// }
// int main()
// {
//   int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
//   int arr_size = sizeof(arr) / sizeof(arr[0]);
//   mergeSort(arr, 0, arr_size-1);
//   for (int i = 0; i < arr_size; i++)
//   {
//     printf("%d ,", i);
//   }
// }

    
    

// }