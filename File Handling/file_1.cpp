#include<stdio.h>
int main(){
	FILE *fi;
	fi=fopen("f:\\test.txt","w");
	fprintf(fi, "Mahmudul Hasan Shafin\n");//Writing using fprint()method
	fclose(fi);
}
