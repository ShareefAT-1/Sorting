#include <stdio.h>

int main() {
   int row=5;
   for (int i = 0; i < row; i++)
   {
   for (int j = 1; j <= i; j++)
   {
    printf("*");
   }
   for (int s = 1; s <= 2*(row-i); s++)
    {
        printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
   
   }

   for (int i = row; i >= 1; i--)
   {
   for (int j = 1; j <= i; j++)
   {
    printf("*");
   }
   for (int s = 1; s <= 2*(row-i); s++)
    {
        printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
   
   }
   
}