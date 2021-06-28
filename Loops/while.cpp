#include<stdio.h>
int main(){
	int a,b=0,x,z;
	printf("Enter a value:");
	scanf("%d",&a);
	while(b!=a){
		b++;
		x=0,z=1;
		while(x!=b){
			x++;
			z=z*b;
		}
		printf("\n%d",z);
	}
}
