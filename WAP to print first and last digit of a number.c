#include <stdio.h>
int main() {
    int n,first,last,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    last=n%10;
    temp=n;
    
    while(temp>=10){
        temp/=10;
    }
    first=temp;
    printf("%d %d",first,last);
    return 0;
}
