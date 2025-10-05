#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,num,max=INT_MIN;
    printf("Enter how many numbers you want to compare:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("Enter any number:");
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
    }
    printf("Maximum number is: %d",max);
    return 0;
}
