#include <stdio.h>
int main()
{
    int size=0;
    int arr[size];
    int element;
    printf("Enter Array size");
    scanf("%d", &size);
    printf("Enter Elements : ");
    scanf("%d", &arr);
    printf("Enter Element To Find : ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            arr[i] = element;
            printf("Yor Element Is At :%d", i);
            break;
        }
        else
        {
            printf("Element Is Not Here");
        }
    }


// int size=0;
// printf("enter size");
// scanf("%d",&size);
}