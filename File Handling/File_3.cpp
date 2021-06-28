#include<stdio.h>
int main(){
	char m[200];
	printf("Enter Data:");
	gets(m);
	FILE *fi;
	fi=fopen("f:\\test.txt","w");
	fputs(m,fi);//Writing data using fputs()method
	fclose(fi);
}
