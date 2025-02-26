#include <stdio.h>
#include <stdlib.h>

/*Write a program to input n numbers on command line argument and calculate maximum of them. */

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[0]);

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max) {
            max = num;
        }
    }

    printf("Maximum number: %d\n", max);
    return 0;
}