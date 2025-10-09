#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int u;
    float bill=0.0;
    scanf("%d",&u);
    if(u<=50){
        bill=0.50*u;
    }
    else if(u>=51 && u<=150){
        bill=(50 * 0.50) + ((units - 50) * 0.75);
    }
    else if(u>=151 && u<=250){
        (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else{
        bill=(50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }
    bill+= bill*0.20;
    printf("%.2f",bill);
    return 0;
}
