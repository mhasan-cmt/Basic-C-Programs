//defining total from 2D array
#include<stdio.h>
int main(){
	int m,n,i,j,sum=0;
	printf("Enter row:");
	scanf("%d",&m);
	printf("Enter col:");
	scanf("%d",&n);
	int student[m][n];
	
	for(i=0;i!=m;i++){
		for(j=0;j!=n;j++){
			printf("Enter value of %d-no-row, %d-no-col:",i,j);
			scanf("%d",&student[i][j]);
			sum=sum+student[i][j];
		}
		printf("\n");
	}
	printf("................printing Outputs........................");
	for(i=0;i!=m;i++){
		for(j=0;j!=n;j++){
			printf("\nvalue of %d-no-row, %d-no-col:%d",i,j,student[i][j]);
		}
		printf("\n");
	}
	printf("\nTotal:%d",sum);
}

