#include<stdio.h>
int main(){
	int a,b;
	FILE *fi,*fr;
	fi=fopen("f:\\object.txt","r");//Reading data
	fr=fopen("f:\\NewTest.txt","a");//appending data to another file
	while(fscanf(fi,"%d%d",&a,&b)==2){
		a=a+b;
		printf("\nAdd is %d",a);
		fprintf(fr,"\nAdd is %d",a);
	}
	fclose(fr);
	fclose(fi);
}
