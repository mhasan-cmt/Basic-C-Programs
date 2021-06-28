#include<stdio.h>
int main(){
	int x,y,a,b;
	printf("Enter first Number:");
	scanf("%d",&x);
	printf("Enter second Number:");
	scanf("%d",&y);
	a=0,b=0;
	while(a!=y){
		a++;
		b=b+x;
	}
	printf("Multiplication:%d",b);
}
