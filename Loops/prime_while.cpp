#include<stdio.h>
int main(){
	int n,x=0,p=0,y;
	printf("Enter a Integer:");
	scanf("%d",&n);
	while(x!=n){
		x=x+1;
		y=n%x;
		if(y==0){
			p=p+1;
		}
	}
	if(p<=2){
		printf("\nPrime!");
	}
	else{
		printf("\nNot Prime!");
	}
}
