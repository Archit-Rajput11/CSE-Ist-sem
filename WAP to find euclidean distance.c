// Write a Program to find the distance beteen two points.
#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,distance;
    printf("Enter coordinates of x and y of starting point:");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates to x and y of ending point:");
    scanf("%f%f", &x2,&y2);
    distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance betwwen two point = %.2f",distance);
    return 0;
}
