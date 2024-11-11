#include <stdio.h>
int merge(int arr1[], int s1, int s2, int arr2[])
{

    int i = 0, j = 0, k = 0;
    int c[s1 + s2];
    while (i < s1 && j < s2)
    {
        if (arr1[i] <= arr2[j])
        {
            c[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            c[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < s1)
    {
        c[k] = arr1[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        c[k] = arr2[j];
        j++;
        k++;
    }

    for (int i = 0; i < s1 + s2; i++)
    {
        printf("%d", c[i]);
    }

    // return c;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};

    int s1 = sizeof(a) / sizeof(a[0]);
    int s2 = sizeof(b) / sizeof(b[0]);

    merge(b, s2, s1, a);

    // for (int i = 0; i < s1+s2; i++)
    // {
    //     printf("%d", c[i]);
    // }
}