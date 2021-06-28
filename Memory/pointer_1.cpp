#include<stdio.h>
int main(){
	int a;
	int *n=&a;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Memory address of a:%d",n);
	printf("\nValue is:%d ",a);
	*n=40;
	printf("\nValue after change:%d",*n);
	
}
