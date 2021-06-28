#include<stdio.h>
void even_odd(int a);
int main(){
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	even_odd(a);
}
void even_odd(int a){
	a=a%2;
	if(a==0){
		printf("\nEven!");
	}
	else{
		printf("\nOdd!");
	}
}
