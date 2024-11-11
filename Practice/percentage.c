#include <stdio.h>
int main()
{
    int pers = 0;
    printf("Enter Your Percentage :");
    scanf("%d", &pers);
    if (pers < 0 || pers > 100)
    {
        printf("Enter A Valid Persentage !!\n");
        printf("Enter Your Percentage :");
        scanf("%d", pers);
    }
    if (pers >= 90 && pers <= 100)
    {
        printf(" Exelend :You Are A Legend,");
    }
    else if (pers >= 75 && pers <= 89)
    {
        printf("Good :You Are Almost There,");
    }
    else if (pers >= 50 && pers <= 74)
    {
        printf("Average :You Could Do Better,");
    }
    else if (pers < 50)
    {
        printf("Poor :You Need To Try Harder,");
    }
}