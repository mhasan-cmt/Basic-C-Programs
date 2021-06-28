#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	char temp[20];
	printf("Enter Data:");
	gets(name);
	
	strcpy(temp,strrev(name));
	printf(temp);
}
