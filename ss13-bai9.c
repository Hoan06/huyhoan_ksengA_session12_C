#include <stdio.h>
void addItem(int array[][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("nhap gia tri cho array[%d][%d] ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
}
void showItem(int array[][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("array[%d][%d] : %d\n",i,j,array[i][j]);
		}
	}
}
void showOneItem(int array[][3]){
		printf("%d ",array[0][0]);
		printf("%d ",array[0][2]);
		printf("\n");
		printf("%d ",array[2][0]);
		printf("%d \n",array[2][2]);
}
void showTwoItem(int array[][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (i==0 || i==2 || j==0 || j==2){
				printf("%d ",array[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
void showThreeItem(int array[][3]){
	for (int i=0;i<3;i++){
		printf("%d ",array[i][i]);
	}
	printf("\n");
	for (int i=0;i<3;i++){
		int j=3-i-1;
		printf("%d ",array[i][j]);
	}
	printf("\n");
}
int check(int num){
	if (num < 2) {
		return 0; 
	}
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
        	return 0;
		}
    }
    return 1;
}
void showFourItem(int array[][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if(check(array[i][j])){
				printf("%d ",array[i][j]);
				if(array[i][j]==3){
			        printf("\n");
		        }
			}
		}
	}
	printf("\n");
}


int main(){
	int chose;
	int array[3][3];
	
	do{
		printf("MENU \n");
		printf("1. Nhap gia tri phan tu \n");
		printf("2. In gia tri cac phan tu cua mang \n");
		printf("3. In ra cac phan tu o goc theo ma tran \n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran \n");
		printf("5  In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran \n");
		printf("6.  IN ra  cac phan tu la so nguyen to theo ma tran \n");
		printf("7. Thoat \n");
		scanf("%d",&chose);
		switch(chose ){
			case 1:
				addItem(array);
				break;
			case 2:
				showItem(array);
				break;
			case 3:
				showOneItem(array);
				break;
			case 4:
				showTwoItem(array);
				break;
			case 5:
				showThreeItem(array);
				break;
			case 6:
				showFourItem(array);
				break;
			case 7:
				break;	
			default :
				printf("khong co lua chon nhu tren ");	
			
		}
		} while (chose!=7);
    
    
    return 0;
}
