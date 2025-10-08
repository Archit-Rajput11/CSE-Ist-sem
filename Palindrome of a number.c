#include <stdio.h>

int main() {
    int N, original, reversed = 0, remainder;

    // Input the number
    scanf("%d", &N);

    original = N;  // Store original number

    // Reverse the number
    while (N != 0) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    }

    // Check if original and reversed are the same
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
