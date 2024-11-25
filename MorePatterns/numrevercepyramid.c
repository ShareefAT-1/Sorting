#include <stdio.h>
int main()
{
    int row = 4;
    int num = 1;
    for (int i = row; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}