#include<stdio.h>
int main(){
	for(int i=0;i!=25;){
		i++;
		printf("*");
		if(i==5 || i==10 || i==15 || i==20){
			printf("\n");
		}
	}
}
