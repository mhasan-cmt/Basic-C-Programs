#include<stdio.h>
#include<string.h>
struct college{
	int id;
	int roll;
	char name[20];
	char dep[15];
	float marks;
};
int main(){
	struct college a;
	int m,p;
	printf("\tEnter a value:");
	scanf("%d",&p);
	for(m=0;m!=p;m++){
	printf("Enter %d no Data.",m+1);
	printf("\n...................");
	printf("\nEnter id:");
	scanf("%d",&a.id);
	printf("Enter Roll:");
	scanf("%d",&a.roll);
	printf("Enter Name:");
	scanf("%s",&a.name);
	printf("Enter Department:");
	scanf("%s",&a.dep);
	printf("Enter Marks:");
	scanf("%f",&a.marks);
	}
	for(m=0;m!=p;m++){
	printf("\nShowing %d no Data:",m+1);
	printf("\n................................");
	printf("\nName:%s,Roll:%d,\nid:%d, Department:%s, Marks:%2f",a.name,a.roll,a.id,a.dep,a.marks);
	
	}
}
