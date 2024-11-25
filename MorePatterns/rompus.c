#include <stdio.h>
int main()
{
    int row=5;
    for (int i = 5; i > 0; i--)
    {
        for (int k = 1; k <= (row-i); k++)
        {
            printf("  ");
        }
        
        for (int j = row; j >= 0; j--)
        {
           printf("%d  ",i);
        }
        printf("\n");
    }
}