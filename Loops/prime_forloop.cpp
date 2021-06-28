#include<stdio.h>
int main(){
	int n,x,p=0,y;
	printf("Enter Number:");
	scanf("%d",&n);
	for(x=0;x!=n;){
		x++;
		y=n%x;
		if(y==0){
			p=p+1;
		}
	}
	if(p<=2){
		printf("\nPrime!");
	}
	else{
		printf("\nNot Prime");
	}
}
