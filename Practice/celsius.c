#include <stdio.h>
int main()
{
    float celsius = 0;
    printf("Enter A Celsius :");
    scanf("%f", &celsius);
    if (celsius >= 0)
    {
        float fahrenheit = (celsius * 5 / 9) + 32;
        printf("Celsius In Fahrenhei :%f", fahrenheit);
    }
    else
    {
        printf("Invalid Value");
    }
}