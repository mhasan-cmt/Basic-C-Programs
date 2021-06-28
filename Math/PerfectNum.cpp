#include<stdio.h>
int main(){
	int num,p=0,x=0,y,m;
	printf("Enter a number:");
	scanf("%d",&num);
	m=num/2;
	while(x!=m){
		x++;
		y=num%x;
		if(y==0){
			p=p+x;
		}
	}
	if(p==num){
		printf("Number is Perfect!");
	}
	else{
		printf("Number is'nt Perfect!");
	}

return 0;
}
