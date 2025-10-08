#include <stdio.h>
#include <math.h>

int main() {
    int n, num, firstDigit, lastDigit, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    num = n; // store original number
    lastDigit = num % 10; // get last digit

    // Find number of digits and first digit
    while (num >= 10) {
        num = num / 10;
        digits++;
    }
    firstDigit = num;

    // If the number has only one digit, no need to swap
    if (digits == 0) {
        printf("%d\n", n);
        return 0;
    }

    // Remove first digit from original number
    int middlePart = (n % (int)pow(10, digits)) / 10;

    // Form the new number
    int result = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}
