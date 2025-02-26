#include <stdio.h>

/*Q5 . Write a program to check the input characters for uppercase, lowercase, number of digits and other characters. Display appropriate message.*/

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {  
        printf("The character '%c' is an UPPERCASE letter.\n", ch);
    } 
    else if (ch >= 97 && ch <= 122) {
        printf("The character '%c' is a LOWERCASE letter.\n", ch);
    } 
    else if (ch >= 48 && ch <= 57) {
        printf("The character '%c' is a DIGIT.\n", ch);
    } 
    else {
        printf("The character '%c' is a SPECIAL character.\n", ch);
    }

    return 0;
}
