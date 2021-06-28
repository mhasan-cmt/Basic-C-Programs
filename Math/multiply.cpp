#include<stdio.h>
int main(){
	int a,b=0,p=1;
	printf("Enter a value:");
	scanf("%d",&a);
	while(b!=a){
		b++;
		p=p*b;
	}
	printf("\nMultiplication is:%d",p);
}
