#include<stdio.h>
#include<string.h>
void lifo_array();
void array_creation();
void add(int a, int b);
void even_odd(int a);
void min(int a, int b);
void max(int a, int b);
void mod(int a, int b);
void div(int a, int b);
void mul(int a, int b);
void sub(int a, int b);
void prime_check(int a);
void circlearea(float r);
void trianglearea();
void palindrome();
void armstrong();
void reverse();
void perfect();
void sumofdigits();
void twoDarray();
//Functions Declared.

int main(){
	int x=0,y=0;
	int select1;
	printf("Select an option:");
	printf("\n1.Calculation between Two integer number.\n2.Area of a circle.\n3.Area of a triangle.\n");
	printf("4.Check palindrom number.\n5.Check Armstrong Number.\n6.Reverse a number.\n7.Check Perfect Number.");
	printf("\n8.Defiine Sum of digits.\n9.Array Programs.");
	printf("\nSelect:");
	scanf("%d",&select1);
	switch(select1){
	case 1:
int select;
printf("\t\t....This program is to Calculation between two numbers....\n");
printf("\n");
printf("\tSelect a option by given number:\n\n");
printf("\t1.Additon,2.Subtraction,\n\t3.Multipication,4.Divide,\n\t5.Modulus,6.even_odd,\n\t7.Max Number,8.Min Number.\n\t9.Prime check\n");

printf("Select:");
scanf("%d",&select);
 switch(select){
	case 1:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		add(x,y);
		break;
	case 2:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		sub(x,y);
		break;
	case 3:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		mul(x,y);
		break;
	case 4:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		div(x,y);
		break;
	case 5:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		mod(x,y);
		break;
	case 6:
		printf("Enter the value:");
		scanf("%d",&x);
		even_odd(x);
		break;
	case 7:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		max(x,y);
		break;
	case 8:
		printf("Enter first value:");
		scanf("%d",&x);
		printf("Enter second value:");
		scanf("%d",&y);
		min(x,y);
		break;
	case 9:
		printf("Enter  value:");
		scanf("%d",&x);
		prime_check(x);
		break;	
	default:
		printf("invalid input!");
		printf("Try again!");
	}
	break;
	case 2:
	static float r=0;
		printf("Enter Radius:");
		scanf("%f",&r);
		circlearea(r);
	break;
	case 3:
		trianglearea();
		break;
	case 4:
		palindrome();
		break;
	case 5:
		armstrong();
		break;
	case 6:
		reverse();
		break;
	case 7:
		perfect();
		break;
	case 8:
		sumofdigits();
		break;
	case 9:
		int a;
		printf("\nSelect an Option:");
		printf("\n1.Create a Array.\n2.Create a Lifo Array.\n3.Create a 2D Array.");
		printf("\nSelect:");
		scanf("%d",&a);
		switch(a){
			case 1:
				array_creation();
				break;
			case 2:
				lifo_array();
				break;
			case 3:
				twoDarray();
				break;
			default:
				printf("Invalid Input!");
				
		}
		break;
			default:
			printf("\nInvalid input! Try Again.");
			
		}	
}	
void perfect(){
	int num,p=0,x=0,y,m;
	printf("Enter a number:");
	scanf("%d",&num);
	m=num/2;
	while(x!=m){
		x++;
		y=num%x;
		if(y==0){
			p=p+x;
		}
	}
	if(p==num){
		printf("Number is Perfect!");
	}
	else{
		printf("Number is'nt Perfect!");
	}
}
void reverse(){
	int p,a,x=0,y;
	printf("Enter Number:");
	scanf("%d",&a);
	p=a;
	while(p!=0){
		x=x*10;
		y=p%10;
		p=p/10;
		x=y+x;
	}
	printf("\nReverse is:%d",x);
}
void armstrong(){
	int n,x=0,y,p;
	printf("Enter a Value:");
	scanf("%d",&n);
	p=n;
	while(p!=0){
		y=p%10;
		p=p/10;
		y=y*y*y;
		x=x+y;
	}
	if(x==n){
		printf("\nArmstrong!");
	}
	else{
		printf("\nNot Armstrong!");
	}
}
void palindrome(){
	int n,p,x=0,y;
	printf("Enter a Value:");
	scanf("%d",&n);
	p=n;
	while(p!=0){
		y=p%10;
		p=p/10;
		x=x*10;
		x=x+y;
	}
		if(x==n){
		printf("\nPalidrome!");
	}
	else{
		printf("\nNot Palidrome!");
	}
}
void add(int a, int b){
	a=a+b;
	printf("Add is:%d",a);
	
}
void sub(int a, int b){
	a=a-b;
	printf("Sub is:%d",a);
}
void mul(int a, int b){
	a=a*b;
	printf("Mul is:%d",a);
}
void div(int a, int b){
	a=a/b;
	printf("Div is:%d",a);
}
void mod(int a, int b){
	a=a%b;
	printf("Mod is:%d",a);
}
void max(int a, int b){
	if(a>b){
		printf("%d is Larger!",a);
	}
	else if(a==b){
		printf("Numbers are equal!");
	}
	else{
		printf("%d is Larger!",b);
	}
}
void min(int a, int b){
	if(a>b){
		printf("%d is Smaller!",b);
	}
	else if(a==b){
		printf("Numbers are equal!");
	}
	else{
		printf("%d is Smaller!",a);
	}
	
}
void even_odd(int a){
	a=a%2;
	if(a==0){
		printf("Even!");
	}
	else{
		printf("Odd!");
	}
}
void prime_check(int a){
	int x,y,p=0;
	for(x=0;x!=a;){
		x++;
		y=a%x;
		if(y==0){
			p=p+1;
		}
	}
	if(p<=2){
		printf("\nPrime!");
	}
	else{
		printf("\nNot Prime");
	}
}
void circlearea(float r){
	float pi=3.1416;
	float area=pi*r*r;
	printf("Area is:%f",area);
}
void trianglearea(){
	float base, height; 
	printf("Enter Base:");
	scanf("%f",&base);
	printf("Enter Height:");
	scanf("%f",&height);
	float area=base*height/2;
	printf("Area is:%.2f",area);
}
void sumofdigits(){
		int p,a,x=0,y;
	printf("Enter Digits:");
	scanf("%d",&a);
	p=a;
	while(p!=0){
		y=p%10;
		x=y+x;
		p=p/10;
	}
	printf("Sum is:%d",x);
}
void array_creation(){
	int a;
	printf("Enter array size:");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("Enter %d no data:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Printing Array Data......");
	for(int i=0;i<a;i++){
		printf("\n %d no data is:%d",i,arr[i]);
	}
	
}
void lifo_array(){
	int a;
	printf("Enter array size:");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("Enter %d no data:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Printing Array Data......");
	for(int i=a;i>0;){
	i--;
		printf("\n %d no data is:%d",i,arr[i]);
	}
}
void twoDarray(){
int row,col;
	
	printf("Enter Row size:");
	scanf("%d",&row);
	printf("Enter Col size:");
	scanf("%d",&col);
	
	int arr[row][col];
	
	
	for(int i=0;i!=row;i++){
		for(int j=0;j!=col;j++){
			printf("Enter %d no row, %d no col value:",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Printing Array elements.....");
	for(int i=0;i!=row;i++){
		for(int j=0;j!=col;j++){
			printf("\n%d no row, %d no col value:%d",i,j,arr[i][j]);
		}
		printf("\n");
	}
	
	
}
