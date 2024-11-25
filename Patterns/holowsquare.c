#include <stdio.h>

int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=row; j++)
        {
            if (j==1||j==5||i==1||i==row)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
            
            
        }
        printf("\n");
        
    }
}