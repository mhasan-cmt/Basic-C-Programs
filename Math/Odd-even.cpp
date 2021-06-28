#include<stdio.h>
int main(){
int num,b;
printf("Enter a positive number:");
scanf("%d",&num);
b=num%2;
if(b==0){
printf("Even");
}
else{
printf("Odd");
}
}
