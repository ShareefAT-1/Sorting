#include <stdio.h>
int main()
{
    int row=6;
    int num=0;
    for (int i = 1; i <= row; i++)
    {
        num++;
        for (int k = 6; k >= i; k--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (j==1||j==i||i==6)
            {
                printf("%d ",num);
            }
            else
            {
                printf("  ");
            }
            
            
        }
        
        printf("\n");
    }
}