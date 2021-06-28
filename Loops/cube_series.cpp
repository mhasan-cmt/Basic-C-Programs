#include<stdio.h>
int main(){
	int a,b=0,p=0;
	printf("Enter a value:");
	scanf("%d",&a);
	
	while(b!=a){
		b++;
		p=b*b*b;
		printf("\n%d",p);
	}
}
