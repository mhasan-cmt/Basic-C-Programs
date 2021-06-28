#include<stdio.h>
int main(){
	int t;
	float temp;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;
		float sum=0;
		scanf("%d",&n);
		int num[n];
		for(int j=1;j<=n;j++){
			scanf("%d",&num[j]);
			sum=sum+num[j];
		}
		temp=sum/n;
		printf("%.2f\n",temp);
	}
}
