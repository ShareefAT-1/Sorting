#include <stdio.h>

int main(){
    float num1,num2;
    char operator;
    printf("Enter First Number: ");
    scanf("%d",&num1);

    printf("Enter Operator: ");
    scanf(" %c",&operator);

    printf("Enter Next Number: ");
    scanf("%d",&num2);

    if (operator == '+')
    {
        printf("%d+%d=%d", num1,num2,num1+num2);
    }
     else if (operator == '-')
    {
        printf("%d-%d=%d", num1,num2,num1-num2);
    }
     else if (operator == '/')
    {
        printf("%d/%d=%f", num1,num2,num1/num2);
    }
     else if (operator == '*')
    {
        printf("%dx%d=%d", num1,num2,num1*num2);
    }
    

}