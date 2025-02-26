#include <stdio.h>

/* Q6  Write a program to perform matrix multiplication.*/

int main() {
    int A[2][2] = {
                {1, 2},
                {4, 5}
            };
    int B[2][2] = {
                {7, 8}, 
                {9, 10},
            };
    int result[2][2] = {0}; 

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
