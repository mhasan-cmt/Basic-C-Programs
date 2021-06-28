#include<stdio.h>
#include<string.h>
int main(){
	char college[100];
	printf("Enter college name:");
	gets(college);
	
	int len=0,i=0;
	while(college[i]!='\0'){
		len++;
		i++;
	}
	printf("String Length is:%d",len);
}
