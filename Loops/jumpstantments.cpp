#include<stdio.h>
int main(){
	int a,x,z;
	printf("Enter a value:");
	scanf("%d",&a);
	z=a/2;
	for(x=0;x!=a;){
		x++;
		if(x==z){
			printf("\nIt is Half of the entire Numbers!");
			goto step2;
		}
		printf("\nNumber is %d",x);
	}
	printf("\nLast!");
	step2:printf("\nLast!-2");
	printf("\nLast!-3");
}
