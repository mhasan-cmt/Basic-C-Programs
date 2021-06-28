#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
int main(){
	int x,y;
	printf("Enter 1st Value:");
	scanf("%d",&x);
	printf("Enter 2nd Value:");
	scanf("%d",&y);
	add(x,y);
	sub(x,y);
	
}
void add(int a,int b){
	a=a+b;
	printf("\nAdd is=%d",a);
}
void sub(int a,int b){
	a=a-b;
	printf("\nSub is=%d",a);
}
