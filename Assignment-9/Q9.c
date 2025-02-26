#include <stdio.h>

void toBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32], i = 0;
    while (num > 0) {
        binary[i++] = num & 1;
        num >>= 1;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void toOctal(int num) {
    if (num == 0) {
        return;
    }
    toOctal(num / 8);
    printf("%d", num % 8);
}

void toHexadecimal(int num) {
    if (num == 0) {
        return;
    }
    toHexadecimal(num / 16);
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    
    printf("Given Number : %d\n", num);

    printf("Binary equivalent    : ");
    toBinary(num);
    printf("\n");

    printf("Octal equivalent     : ");
    toOctal(num);
    printf("\n");

    printf("Hexadecimal equivalent : ");
    toHexadecimal(num);
    printf("\n");

    return 0;
}
