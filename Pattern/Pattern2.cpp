#include<stdio.h>
int main(){
	int m=15,a=0;
	while(a!=m){
		printf("*");
		if(a==4|| a==8|| a==11|| a==13){
			printf("\n");
		}
		a++;
	}
}
