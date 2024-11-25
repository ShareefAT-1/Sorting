#include <stdio.h>

int main() {
    int row=5;
    int num;

    for (int i = row; i >=1; i--) {
        num = (i*2)-1;
        for (int k = 0; k < row-i; k++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <=i; j++) {
            printf("%d ", num);
            num =num-2;
        }

        printf("\n");
    }
}
