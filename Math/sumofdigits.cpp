#include<stdio.h>
int main(){
	int p,a,x=0,y;
	printf("Enter Number:");
	scanf("%d",&a);
	p=a;
	while(p!=0){
		y=p%10;
		x=y+x;
		p=p/10;
	}
	printf("Sum is:%d",x);
}
