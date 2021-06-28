#include<stdio.h>
int main(){
	int a,b,p=0;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	p=a;
	a=b;
	b=p;
	printf("\nAfter Swap!......");
	printf("\nFirst Number:%d",a);
	printf("\nSecond Number:%d",b);
}
