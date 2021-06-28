#include<stdio.h>
int test(int a, int b);
int main(){
	int x,y,i;
	printf("Enter first value:");
	scanf("%d",&x);
	printf("Enter second value:");
	scanf("%d",&y);
	i=test(test(test(x,y),test(100,0)),test(test(x,y),test(100,0)));
	printf("\nAdd+100*2 is:%d",i);
}
int test(int a, int b){
	a=a+b;
	return a;
}
