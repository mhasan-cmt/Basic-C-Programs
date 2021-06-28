#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    switch(a){
    case 1:
        printf("\nYou've Entered 1!");
        break;
    case 2:
        printf("\nYou've Entered 2!");
        break;
    case 3:
        printf("\nYou've Entered 3!");
        break;
    case 4:
        printf("\nYou've Entered 4!");
        break;
    default:
        printf("\nTry again entering 1-4.");
    }
}
