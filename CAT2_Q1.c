//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:scores arrays
*/

#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    int i, j;

    printf("Scores array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}