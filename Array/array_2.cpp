#include<stdio.h>
int main(){
	int p,q;
	int a[p][q];
	printf("Enter row:");
	scanf("%d",&p);
	printf("Enter col:");
	scanf("%d",&q);
	for(int x=0;x!=p;x++){
		for(int y=0;y!=q;y++){
			printf("\nEnter %d no row %d no col:",x,y);
			scanf("%d",&a[x][y]);
		}
	}
	for(int x=0;x!=p;x++){//X++ for Fifo structure;
		for(int y=0;y!=q;y++){
			printf("\n%d no row %d no col:%d",x,y,a[x][y]);
		}
	}
	
}
