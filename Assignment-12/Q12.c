#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0, right = strlen(str) - 1;
    char temp;
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverseString(str);
    printf("Reversed String: %s\n", str);

    return 0;
}
