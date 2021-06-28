#include<stdio.h>
int main(){
	float num;
	printf("\tDefining positive/negetive number.");
	printf("\n\t...................................\n");
	printf("Enter a value:");
	scanf("%f",&num);
	if(num==0){
		printf("\nYou've entered 0.");
	}
	else if(num<0){
		printf("\nNumber is Negetive!");
	}
	else{
		printf("\nNumber is Positive!");
	}
}
