#include<stdio.h>
int main(){
	int a,b=0,p;
	printf("Enter a value:");
	scanf("%d",&a);
	while(b!=a){
		b++;
		p=b%2;
		if(p==0){
			printf("\nEven Number:%d",b);
		}
	}
}
