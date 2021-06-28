#include<stdio.h>
int add(int a,int b);
int main(){
	int a,b,p=10;
	printf("Enter 1st Value:");
	scanf("%d",&a);
	printf("Enter 2nd Value:");
	scanf("%d",&b);
	printf("Add in Function:%d",add(a,b));
	p=p+add(a,b);
	printf("Add in main:%d",p);
}
int add(int a,int b){
	a=a+b;
	return a;
}
