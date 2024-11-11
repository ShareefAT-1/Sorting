#include <stdio.h>
int main()
{
    int CurrentYear;
    int BirthYear;
    printf("Enter Current Year: ");
    scanf("%d", &CurrentYear);
    printf("Enter Birth Year: ");
    scanf("%d", &BirthYear);
    if (CurrentYear > 2024)
    {
        printf("Enter a valid year.");
    }
    else if (BirthYear > 2024)
    {
        printf("Enter a valid Birthyear.");
    }
    else if (BirthYear < CurrentYear)
    {
        printf("Current Year Is :%d", CurrentYear);
        printf("\n");
        // printf("The Year that You Become A 100 Year Old Vampire Is :%d", BirthYear + 100);
        // printf("\n");
        printf("You Need To wait More Than :%d ", (BirthYear+100)-CurrentYear);
        printf("Years.");


    }
    
}