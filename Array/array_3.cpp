#include<stdio.h>
int main(){
	int x,y,z,p,q,m;
printf("Enter tab:");
scanf("%d",&p);
printf("Enter row:");
scanf("%d",&q);
printf("Enter col:");
scanf("%d",&m);1
	int a[p][q][m];
	for(x=0;x!=p;x++){
		for(y=0;y!=q;y++){
		for(z=0;z!=m;z++){
		printf("Enter %d-no tab,%d-no row,%d-no col:",x,y,z);
		scanf("%d",&a[x][y][z]);
			}
		}
	}
	for(x=0;x!=p;x++){
		for(y=0;y!=q;y++){
		for(z=0;z!=m;z++){
		printf("\n%d",a[x][y][z]);
			}
		}
	}


}
