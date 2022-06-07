#include<stdio.h>
int main(){
	int Mattrix[4][4],i,j;
	for(i=0;i<4;i++){
		 
		 for(j=0;j<4;j++){
		 	printf("enter a:[%d][%d]",i,j);
		 	scanf("%d",&Mattrix[i][j]);
		 }
	}
	printf("\n printing the elements.....\n");
	
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf("%d\t",Mattrix[i][j]);
		}
	}
}
