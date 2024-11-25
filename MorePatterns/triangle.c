#include <stdio.h>
int main()
{
    int row=5;
    int num=0;
    for (int i = 1; i <= row; i++)
    {
        num++;
        for (int k = 1; k <= row-i; k++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++)
        {
           printf("%d   ",num);
        }
        
        printf("\n");
    }
}