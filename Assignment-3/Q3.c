#include <stdio.h>

/*Q.3 Write a program to calculate Fibonacci Series up to n numbers */

void fibonacciLoop(int n) {
    long long first = 0, second = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacciLoop(n);
    }

    return 0;
}
