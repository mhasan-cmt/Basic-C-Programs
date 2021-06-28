#include<stdio.h>
int main(){
    char a;
    int x,y;//Declaring Variables
    printf("Enter +,-,*,/,% :");
    scanf("%c",&a);
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    //Taking inputs from user
    switch(a){
    case '+':
        x=x+y;
        printf("Add Result is: %d",x);
        break;
    case '-':
        x=x-y;
        printf("Sub Result is: %d",x);
        break;
    case '/':
        x=x/y;
        printf("Divide Result is: %d",x);
        break;
    case '*':
        x=x*y;
        printf("Multi Result is: %d",x);
        break;
    case '%':
        x=x%y;
        printf("Mod Result is: %d",x);
        break;
    default:
        printf("Invalid!");
    }


}
