#include<stdio.h>
int main(){
	int n,p,x=0,y;
	printf("Enter a Value:");
	scanf("%d",&n);
	p=n;
	while(p!=0){
		y=p%10;
		p=p/10;
		x=x*10;
		x=x+y;
	}
		if(x==n){
		printf("\nPalidrome!");
	}
	else{
		printf("\nNot Palidrome!");
	}
	
}
