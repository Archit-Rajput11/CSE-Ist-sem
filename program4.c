//Program of find area of Reactangle.
#include<stdio.h>
int main(){
    int length,width,area;
    printf("Enter length of rectangle:");
    scanf("%d",&length);
    printf("Enter width of rectangle:");
    scanf("%d",&width);
    area=length*width;
    printf("Area of rectangle having length %d and width %d = %d",length,width,area);
    return 0;
}