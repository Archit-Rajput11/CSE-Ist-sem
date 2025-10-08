#include <stdio.h>
#include <math.h>

int main() {
    int N, original, temp, remainder, digits = 0;
    double sum = 0;

    // Input the number
    scanf("%d", &N);

    original = N;
    temp = N;

    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = N;

    // Calculate sum of digits raised to the power of 'digits'
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    if ((int)sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
