#include <stdio.h>
int main(){
    int size,ele;
    int arr[]={4,7,8,3,5};
    size=sizeof(arr)/sizeof(arr[0]);
    ele=3;
    int pos;
    for (int i = 0; i < size; i++)
    {
       if (arr[i]==ele)
       {
        printf("Element Found At Position %d",i);

       }
       
    }
    
}