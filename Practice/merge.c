#include <stdio.h>
void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int b[right - left + 1];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (int k = 0, i = left; i <= right; i++, k++)
    {
        arr[i] = b[k];
    }
}
void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main()
{
    int arr[] = {11,5,6,7,4,3,6,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}