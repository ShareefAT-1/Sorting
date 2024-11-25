#include <stdio.h>
int main()
{
    int row=5;
    for (int i = 5; i >= 0; i--)
    {
        for (int k = 1; k <= row-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
           printf(" *");
        }
        printf("\n");
    }
}