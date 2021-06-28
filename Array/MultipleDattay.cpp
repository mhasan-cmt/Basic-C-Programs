#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter tab:");
	scanf("%d",&a);
	printf("Enter row:");
	scanf("%d",&b);
	printf("Enter col:");
	scanf("%d",&c);
	int arr[a][b][c];
	
	for(int i=0;i!=a;i++){
		for(int j=0;j!=b;j++){
			for(int k=0;k!=c;k++){
				printf("Enter %d no tab %d no row %d no value:",i,j,k);
				scanf("%d",&arr[i][j][k]);
	}
	}
	printf("\n");
	}
	for(int i=0;i!=a;i++){
		for(int j=0;j!=b;j++){
			for(int k=0;k!=c;k++){
				printf("\n %d no tab %d no row %d no value:%d",i,j,k,arr[i][j][k]);
	}
	}
	printf("\n");
	}
	
}
