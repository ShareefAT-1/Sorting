#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        if (n%i==0)
    {
       printf("Not A Prime Number");
    }

    else if (n%i==!0)
    {
       printf("Is A Prime Number");
    }
    
   
    }
    
    
    
}