#include <stdio.h>
int giaiThua(int num){
	int tinhGT=1;
	if (num<0){
		printf("ban phai nhap so nguyen lon hon 0 ");
		return -2;
	}
	for (int i=1;i<=num;i++){
		tinhGT*=i;
	}
	printf("giai thua cua so %d la %d ",num,tinhGT);
	return 1;
}

int main(){
	int num;
	printf("nhap mot so nguyen bat ki ");
	scanf("%d",&num);
	giaiThua(num);
	
	return 0;
}
