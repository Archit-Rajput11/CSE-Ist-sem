#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    printf("Sum of all digits: %d",sum);
    return 0;
    }
