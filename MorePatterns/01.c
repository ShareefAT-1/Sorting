#include <stdio.h>
int main()
{
    int num=0;
    int row=5;
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= row-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (num==0)
            {
                num=1;
            }
            else
            {
                num=0;
            }
            printf("%d ",num);
            
            
        }
        printf("\n");
    }
}