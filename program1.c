#include<stdio.h>
int main(){
    char ch;
    int x;
    float y;
    double z;
    printf("Enter Character ");
    scanf("%c",&ch);
    printf("Enter integer");
    scanf("%d",&x);
    printf("Enter floating value");
    scanf("%f",&y);
    printf("Enter Double Value");
    scanf("%Lf",&z);
    printf("Value of x= %d \nValue of ch = %c \nValue of y= %f \nValue of z= %Lf", x,ch,y,z);
    return 0;
    
}