#include <stdio.h>
#include <string.h>

/*13. Declare an Array of type char* and initialize it with a few strings (hard coded). Display the strings which are duplicated in that array.*/

int main() {
    char *arr[8] = {"apple", "banana", "cherry", "apple", "date", "banana", "fig", "cherry"};

    printf("Duplicate Strings:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (arr[j] != NULL && strcmp(arr[i], arr[j]) == 0) { 
                printf("%s\n", arr[i]);
            }
        }
    }
    return 0;
}
