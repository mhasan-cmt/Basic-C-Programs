#include<stdio.h>
void comp(int a, int b);
int main(){
	int a,b;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	comp(a,b);
}
void comp(int a, int b){
	if(a>b){
		printf("\nLargest is=%d",a);
	}
	else{
		printf("\nLargest is=%d",b);
	}
	}
