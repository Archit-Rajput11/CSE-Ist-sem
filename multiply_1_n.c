#include<stdio.h>
int main(){
    int i,n,multiply=1;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        multiply*=i;
    }
    printf("multiplication= %d",multiply);
    return 0;
}    
