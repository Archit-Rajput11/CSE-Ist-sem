#include<stdio.h>
int main(){
  int num;
printf("Enter Number: ");
scanf("%d", &num);
while(num !=0){
  int rem = num%10;
  printf("%d ", rem);
  num = num/10;
}
  
return 0;
} 
