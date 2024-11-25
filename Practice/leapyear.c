#include <stdio.h>
int main()
{
    int year;
    printf("Enter A Year To check If Its Leap Year Or Not :");
    scanf("%d", &year);
    if (year < 4)
    {
        printf("Invalid Year");
    }
    else if (year % 4 == 0)
    {
        printf("It Is A Leap Year :%d", year);
    }
    else if (year % 100 == 0)
    {
        printf("Its Not A Leap Year :%d", year);
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        printf("It Is A Leap Year :%d", year);
    }
    else
    {
        printf("Its not a Leap Year !");
    }
    
}