#include <stdio.h>
int main()
{
    char a = 64;
    int num = 0;
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
        {
            num++;
        }
        else
        {
            a++;
        }

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d", num);
            }
            else
            {
                printf("%c", a);
            }
        }

        printf("\n");
    }
}