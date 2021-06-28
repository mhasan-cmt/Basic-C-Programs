#include<stdio.h>
int test();
int a=40;//Global variable Declaration
int main(){
	printf("\nValue of a in main:%d",a);
	int b=10;//Local Variable Declaration
	b=b+test();
	printf("\nValue of a after:%d",b);
}
int test(){
	
	printf("\nValue of a:%d",a);
	a=a+1;
	printf("\nValue of a+1:%d",a);
	return a;
}
