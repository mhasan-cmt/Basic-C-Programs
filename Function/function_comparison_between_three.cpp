#include<stdio.h>
void comp(int a,int b,int c);
int main(){
	int a,b,c;
	printf("\tComparison between three value!......");
	printf("\nEnter first Value:");
	scanf("%d",&a);
	printf("Enter second Value:");
	scanf("%d",&b);
	printf("Enter third Value:");
	scanf("%d",&c);
	comp(a,b,c);
	
}
void comp(int a,int b,int c){
	if(a>b && a>c){
		printf("Largest is %d",a);
	}
	else if(b>a && b>c){
		printf("\nLargest is %d",b);
	}
	else{
		printf("\nLargest is %d",c);
	}
}
