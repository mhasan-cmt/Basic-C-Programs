//String Compare using strcmp() method
#include<stdio.h>
#include<string.h>
int main(){
	char s[]="Shafin";
	char s2[]="Shafin";
	int a=strcmp(s,s2);
	printf("%d\n",a);
if(a==0){
	printf("Strings are equal!");
}
	else{
		printf("not equal!");
	}
}
