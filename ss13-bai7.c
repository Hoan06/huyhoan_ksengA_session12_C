#include <stdio.h>
void maTran(int array[][100],int row,int col){
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int row,col;
	printf("nhap so hang ");
	scanf("%d",&row);
	printf("nhap so cot ");
	scanf("%d",&col);
	int array[100][100];
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("nhap gia tri cho array[%d][%d] ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	maTran(array,row,col);
	
	return 0;
}
