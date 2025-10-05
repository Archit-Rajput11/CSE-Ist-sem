//Program of find area and parameter of Cirlce.
#include<stdio.h>
int main(){
    float r,area,parameter;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area= 3.14*r*r;
    parameter=2*3.14*r;
    printf("Area of circle = %f\nParameter of circle = %f",area,parameter);
    return 0;
}
