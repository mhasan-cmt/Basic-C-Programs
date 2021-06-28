#include<stdio.h>
int main(){
	int t,a,b,c,area;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d %d",&a,&b,&c);
		area=a*b*c;
		printf("%d\n",area);
	}
	return 0;
}
