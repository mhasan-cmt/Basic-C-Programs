#include<stdio.h>
int main(){
	int a,b,p=0,y=0,z=0;
	printf("Enter a value:");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		p=b%2;
		if(p==0){
			printf("\n%d is even!",b);
			y=b+y;
		}
		else{
			printf("\n%d is odd!",b);
			z=b+z;
		}

	}	
	printf("\n\nAddition of even numbers:%d",y);
	printf("\n\nAddition of odd numbers:%d",z);
}
