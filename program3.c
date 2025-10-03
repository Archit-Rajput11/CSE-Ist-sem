// Program to find sum multipication division and subtraction of two numbers.
#include<stdio.h>
int main(){
    int x,y,sum,subtraction,multiplication,remainder;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    sum=x+y;
    subtraction=x-y;
    multiplication=x*y;
    remainder=x%y;
    printf("Addition=%d\n",sum);
    printf("Subtraction=%d\n",subtraction);
    printf("Multiplication=%d\n",multiplication);
    printf("Remainder=%d\n",remainder);
    return 0;


}