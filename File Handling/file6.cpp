#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char name[30];
	printf("Enter Name:");
	gets(name);
	int len=strlen(name);
	FILE *fi;
	fi=fopen("f:\\test2.txt","a");
	if(fi==NULL){
		printf("File Does'nt exists");
	}
	else {
		printf("File is opened..");
		for(i=0;i!=len;i++){
			fputc(name[i],fi);
		}
		printf("\nFile is written successfully.");
		fclose(fi);
	}
}
