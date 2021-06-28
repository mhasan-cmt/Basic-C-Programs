#include<stdio.h>
int main(){
	char m[200];
	FILE *fi;
	fi=fopen("f:\\test2.txt","r");//Reading Data
	fgets(m,200,fi);
	puts(m);
	fclose(fi);
	
	
}
