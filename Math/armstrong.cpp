#include<stdio.h>
int main(){
	int n,x=0,y,p;
	printf("Enter a Value:");
	scanf("%d",&n);
	p=n;
	while(p!=0){
		y=p%10;
		p=p/10;
		y=y*y*y;
		x=x+y;
	}
	if(x==n){
		printf("\nArmstrong!");
	}
	else{
		printf("\nNot Armstrong!");
	}
}
