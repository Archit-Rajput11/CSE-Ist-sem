//Write a program to convert decimal number to hexadecimal number.
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char hexa[100]=" ";
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp=n;
    //write logic
    while(temp!=0){
        int rem= temp%16;
        char str[2];
        if(rem>=0 && rem<=9)
            sprintf(str,"%d",rem);
        else if(rem==10)
            str[0]='A';
        else if(rem==11)
            str[0]='B';
        else if(rem==12)
            str[0]='C';
        else if(rem==13)
            str[0]='C';
        else if(rem==14)
            str[0]='D';
        else if(rem==15)
            str[0]='E';
        else
            str[0]='F';
        str[1]= '\0';
        strcat(hexa,str);
        temp= temp/16;
    }
    strrev(hexa);
    printf("Hexa decimal of %d is %s",n,hexa);
    return 0;
}
