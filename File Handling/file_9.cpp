#include<stdio.h>
#include<string.h>
int main(){
	char name[30];
	int age,phone,i,num;
	FILE *file;
	
	file=fopen("f:\\student.txt","a");
	
	if(file==NULL){
		printf("File doesnt exists...");
	}
	else{
		printf("File is Opened....\n");
		printf("Enter number of students:");
		scanf("%d",&num);
		for(i=1;i<=num;i++){
		
		printf("Enter Name:");
		scanf("%s",&name);
		
		printf("Enter Age:");
		scanf("%d",&age);
		
		printf("Enter PhoneNumber:");
		scanf("%d",&phone);
		
		fprintf(file,"\n%s		%d	%d\n",name,age,phone);
		
		}
		printf("\nData written successfully...\n");
		fclose(file);
	}
}
