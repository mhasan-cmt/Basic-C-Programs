#include<stdio.h>
int main(){
    int a,x,y,z,v;
    printf("Enter 1=max_min,2==even_odd:");
    scanf("%d",&a);
    if(a>=3 || a<=0){
        printf("\nPlease Enter a valid number!");
    }
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    switch(a){
    case 1:
        if(x>=y){
            printf("Largest is a=%d & Lowest is b=%d.",x,y);
        }
       else{
        printf("Largest is b=%d & Lowest is a=%d.",y,x);
       }
       break;
    case 2:
        z=x%2;
        v=y%2;
        if(z==0 && v!=0){
            printf("%d is even & %d is odd!",x,y);
        }
        else if(z!=0 && v==0){
            printf("%d is odd & %d is  even!",x,y);
        }
        else if(z==0 && v==0){
            printf("Both are even!");
        }
        else{
            printf("Both are odd!");
        }
        break;
    default:
        printf("invalid");

    }

}
