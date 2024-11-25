#include <stdio.h>
int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int left = 0;
    int right = size - 1;
    while (left<=right)
    {
       int mid=(left+right)/2;
       if (arr[mid]==target)
       {
        printf("Value Found At :%d",mid);
        break;
       }
       else if (target>arr[mid])
       {
        right=mid-1;
       }
       else
       {
        left=mid+1;
       }
       
       
       
    }
    
}