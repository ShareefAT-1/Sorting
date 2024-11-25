#include <stdio.h>

int main() {
    int row=5;
    int num;

    for (int i = row; i >= 1; i--) {
        num = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num =num+2;
        }

        printf("\n");
    }
}








// #include <stdio.h>

// int main() {
//     int row = 5;
//     int num;

//     for (int i = 0; i < row; i++) {
//         num = 1 + 2 * i;
//         for (int j = 0; j < row - i; j++) {
//             printf("%d ", num);
//             num = num + 2;
//         }

//         printf("\n");
//     }
// }




// #include <stdio.h>

// int main() {
//     int row=5;
//     int num;

//     for (int i = row; i >= 1; i--) {
//         num = 1;
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num =num+2;
//         }

//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main() {
//     int row = 5;
    
//     for (int i = row; i >= 1; i--) {
//         for (int j = 0; j < (row - i); j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 3); j =j+ 2) {
//             printf("%d", j + 2);
//         }
//         printf("\n");
//     }
// }







// #include <stdio.h>

// int main() {
//     int row = 5; 
    
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < i; j++) {
//             printf(" ");
//         }
//         for (int j = 1 + 2*i; j <= 2*row - 1; j += 2) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }
