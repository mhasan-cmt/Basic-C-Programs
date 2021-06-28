#include<stdio.h>
#include<string.h>
int main(){
	char ch;
	FILE *file;
	file=fopen("f:\\test2.txt","r");
	if(file==NULL){
		printf("File does'nt exists");
	}
	else {
	printf("File is opened..\n");
	while(!feof(file)){
	ch=fgetc(file);//fgetc() method 
		printf("%c",ch);
	}
		fclose(file);
		}
}
