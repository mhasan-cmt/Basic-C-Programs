//programm for adding and defining average for array elements
#include<stdio.h>
int main(){
	int p,m=0;
	printf("How many Numbers:");
	scanf("%d",&p);
	int a[p];
	int i;
	for(i=0;i!=p;i++){
		scanf("%d",&a[i]);
		m=m+a[i];
	}
	printf("\nTotal:%d",m);
	printf("\nAverage:%.2f",(float)m/p);
	
	
}
