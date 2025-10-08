#include <stdio.h>

int main() {
    char ch;

    // Input a single character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it's an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Alphabet\n");
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Otherwise, it's a symbol
    else {
        printf("Symbol\n");
    }

    return 0;
}
