#include<stdio.h>
int main(){
	int t,num,positive=0,negetive=0;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&num);
		if(num>0){
			positive++;
		}
		else if(num<0){
			negetive++;
		}
	}
	printf("%d %d",positive,negetive);
}
