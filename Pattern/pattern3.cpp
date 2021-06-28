#include<stdio.h>
int main(){
	int i,a=10;
	for(i=1;i<=a;i++){
		printf("%d",i);
		if(i==1||i==3||i==6||i==10){
			printf("\n");
		}
	}
}
