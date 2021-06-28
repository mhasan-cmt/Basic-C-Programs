#include<stdio.h>
int main(){
	int a[5];
	for(int x=0;x!=5;x++){
		printf("Enter %d no value:",x);
		scanf("%d",&a[x]);
	}
	for(int x=5;x!=0;){x--;
		printf("\nValue no %d:%d",x,a[x]);
	}
}
