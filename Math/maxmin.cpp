#include<stdio.h>
int main(){
int a,b,c;
printf("Defining Minimum from three number....");
printf("\nEnter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);
if(a<=b && a<=c){
    printf("\nLowest number is: %d",a);
}
else if(b<=a && b<=c){
    printf("\nLowest number is: %d",b);
}
else{
    printf("\nLowest number is: %d",c);
}
}
