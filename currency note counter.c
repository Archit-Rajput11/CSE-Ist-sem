#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int amount;
    scanf("%d", &amount);

    int notes[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int count, i;

    for(i = 0; i < 8; i++) {
        count = amount / notes[i];
        if(count > 0) {
            printf("%d: %d\n", notes[i], count);
            amount = amount % notes[i];
        }
    }

    return 0;
}
