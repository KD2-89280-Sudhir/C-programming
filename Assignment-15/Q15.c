#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Q.15 Input a string from the user. Count occurrences (case insensitive) of 
each alphabet in the string.*/

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char upperChar = toupper(str[i]);
            freq[upperChar - 'A']++;
        }
    }
    printf("\nAlphabet Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", (i + 'A'), freq[i]);
        }
    }
    return 0;
}
