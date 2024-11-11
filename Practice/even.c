#include <stdio.h>
int main()
{
    int num, sum=0;
        printf("Enter A Number :");
        scanf("%d", &num);
    if (num < 0)
    {
        printf("Enter A Positive Integer !!\n");
        printf("Enter A Number :");
        scanf("%d", &num);
    }
    for (int i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
        
    }
    printf("%d", sum);
}