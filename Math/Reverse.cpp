#include<stdio.h>
int main(){
	int p,a,x=0,y;
	printf("Enter Number:");
	scanf("%d",&a);
	p=a;
	while(p!=0){
		x=x*10;
		y=p%10;
		p=p/10;
		x=y+x;
	}
	printf("\nReverse is:%d",x);
}
