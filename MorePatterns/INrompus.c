#include <stdio.h>
int main()
{
    int row=4;
    int num=1;
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= row-i; k++)
        {
            printf("  ");
        }
        
        for (int j = row; j >= 0; j--)
        {
           printf("%d  ",num);
        }
        num++;
        printf("\n");
    }
}