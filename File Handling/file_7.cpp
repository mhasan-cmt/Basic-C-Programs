#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	FILE *file;
	file=fopen("f:\\test2.txt","w");
	if(file==NULL){
		printf("File does'nt exists");
	}
	else {
		printf("File is opened..\n");
			printf("Enter your data:");
			gets(name);
			fputs(name,file);
	printf("data written successfully");
		fclose(file);
		}
}
