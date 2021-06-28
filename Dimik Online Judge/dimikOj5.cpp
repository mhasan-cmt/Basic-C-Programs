#include<stdio.h>
int main(){
	int t,max,min;
	scanf("%d",&t);
	int a,b,c,d,e;
	for(int i=0;i<t;i++){
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		if(a>=b && a>=c && a>=d && a>=e){
			max=a;
		}
		else if(b>=a && b>=c && b>=d && b>=e){
			max=b;
		}
		else if(c>=b && c>=a && c>=d && c>=e){
			max=c;
		}
		else if(d>=b && d>=c && d>=a && a>=e){
			max=d;
		}
		else{
			max=e;
		}
	if(a<=b && a<=c && a<=d && a<=e){
		min=a;
	}
		else if(b<=a && b<=c && b<=d && b<=e){
		min=b;
		}
		else if(c<=b && c<=a && c<=d && c<=e){
			min=c;
		}
		else if(d<=b && d<=c && d<=a && d<=e){
			min=d;
		}
		else{
			min=e;
		}
	printf("%d %d\n",max,min);
	}
}
