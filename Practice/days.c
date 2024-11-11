#include <stdio.h>
int main()
{
    int day = 0;
    printf("Enter A Day Number :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Today Is Monday");
        break;
    case 2:
        printf("Today Is tusday");
        break;
    case 3:
        printf("Today Is Wednesday");
        break;
    case 4:
        printf("Today Is Thursday");
        break;
    case 5:
        printf("Today Is Friday");
        break;
    case 6:
        printf("Today Is Saturday");
        break;
    case 7:
        printf("Today Is sunday");
        break;

    default:printf("Invalid Number !!");
        break;
    }
}