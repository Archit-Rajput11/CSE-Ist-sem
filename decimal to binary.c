//Write a program to convert decimal number to octal number.
#include<stdio.h>
int main(){
    int n, bin=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp=n;
    //write logic
    int place=1;
    while(temp!=0){
        int rem= temp%8;
        bin=bin+rem * place;
        temp= temp/8;
        place*= 10;
    }
    printf("Octal of %d is %d",n,bin);
    return 0;
}
