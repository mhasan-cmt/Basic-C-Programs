#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	int age;
	FILE *file;
	file=fopen("f:\\test2.txt","a");
	if(file==NULL){
		printf("File does'nt exists");
	}
	else {
	printf("File is opened..\n");
	printf("Enter Name:");
	gets(name);
	printf("Enter age:");
	scanf("%d",&age);
	fprintf(file,"Name:%s, Age:%d\n",name,age);
	printf("Data written successfully");
	fclose(file);
		}
}
