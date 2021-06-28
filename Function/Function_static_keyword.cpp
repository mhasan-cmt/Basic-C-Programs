#include<stdio.h>
int test(int a, int b);
int main(){
	int x,y;
	printf("Enter first value:");
	scanf("%d",&x);
	printf("Enter second value:");
	scanf("%d",&y);
	x=test(test(x,y),test(100,0));
	printf("\nAdd is %d",x);
}
int test(int a, int b){
	static int p=10;
	printf("\nValue of P is: %d",p);
	p=p+a+b;
	return p;
}
