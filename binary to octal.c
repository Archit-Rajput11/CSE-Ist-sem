//write a program to convert binary to octal.
#include<stdio.h>
int convertbinarytodecimal(int binarynum){
    int dec=0, base=1;
    while(binarynum !=0){
    int rem= binarynum %10;
    dec+= rem* base;
    base*=2;
    binarynum/=10;
    }
    return dec;
}
int convertdecimaltooctal(int decnum){
    int place=1, octal=0;
    while(decnum!=0){
        int rem =decnum%8;
        octal= octal+rem*place;
        decnum= decnum/8;
        place*=10;
    }
    return octal;
}
int main(){
    int num;
    printf("Enter binary number: ");
    scanf("%d",&num);
    int dec= convertbinarytodecimal(num);
    int octal = convertdecimaltooctal(dec);
    printf("Octal of %d is %d",num,octal);
    return 0;
}
