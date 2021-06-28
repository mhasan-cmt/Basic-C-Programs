#include<stdio.h>
int main(){
int t,num,n;
scanf("%d",&t);
for(int i=1;i<=t ;i++){
scanf("%d",&num);
if(num%2==0){
	printf("even\n");
}
else{
	printf("odd\n");
}	
}
return 0;
}
