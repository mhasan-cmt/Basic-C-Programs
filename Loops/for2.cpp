#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a Value:");
	scanf("%d",&a);
	for(b=2;b!=a;b=b+2){
	printf("\nNumber is:%d",b);
	}
}
