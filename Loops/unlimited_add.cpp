#include<stdio.h>
int main(){
	int a,b,p=0;
	printf("Enter a value:");
	scanf("%d",&a);
	for(b=0;b<=a;b++){
		p=p+b;
		printf("\nNumber is:%d",b);
	
	}
		printf("\n\nTotal:%d",p);
}
