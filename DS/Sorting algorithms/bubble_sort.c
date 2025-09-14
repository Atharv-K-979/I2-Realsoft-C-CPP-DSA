// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <ctype.h>
// #include <time.h>
// #include <limits.h>
// int main() {
//     int x[5];
//     int i,j,tmp,flg;
//     printf("Enter Array Data\n");
//     for (int  i = 0; i < 5; i++)
//     {
//         scanf("%d",&x[i]);
//     }
//     printf("\nBefore Sorting");
//     for (int  i = 0; i < 5; i++)
//     {
//         printf("%4d",x[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         flg=0;
//         for (int j = 0; j < 4-i; j++)
//         {
//             if(x[j]>x[j+1]){
//                 tmp=x[j];
//                 x[j]=x[j+1];
//                 x[j+1]=tmp;
//                 flg=1;   // this indicates exchange took place
//             }
//         }
//         if(j==0){
//             break;
//         }
//     }
//     printf("\nAfter Sorting");
//     for (int  i = 0; i < 5; i++)
//     {
//         printf("%4d",x[i]);
//     }
    
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int x[5];
    int i, j, tmp, flg;

    printf("Enter Array Data\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    printf("\nBefore Sorting:");
    for (i = 0; i < 5; i++) {
        printf("%4d", x[i]);
    }

    // Bubble Sort
    for (i = 0; i < 4; i++) {
        flg = 0;
        for (j = 0; j < 4 - i; j++) {
            if (x[j] > x[j + 1]) {
                tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
                flg = 1;   // swap happened
            }
        }
        if (flg == 0) {  // no swaps -> already sorted
            break;
        }
    }

    printf("\nAfter Sorting:");
    for (i = 0; i < 5; i++) {
        printf("%4d", x[i]);
    }

    return 0;
}
