#include <stdio.h>
int UCLN(int a,int b){
	while (b!=0){
		int temp=b;
	    b=a%b;
 	    a=temp;
	}
	
	return a;
}

int main(){
	int num1,num2,ketQua;
	printf("nhap so thu nhat ");
	scanf("%d",&num1);
	printf("nhap so thu hai ");
	scanf("%d",&num2);
	ketQua=UCLN(num1,num2);
	printf("UCLN cua %d va %d la %d ",num1,num2,ketQua);
	
	return 0;
}
