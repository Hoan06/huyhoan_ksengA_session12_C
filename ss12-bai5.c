#include <stdio.h>
int soNguyen(int a, int b){
	int flag=0;
	int flag2=0;
	for (int i=2;i<a;i++){
		flag=0;
		if (a%i==0){
			flag=1;
			break;
		}
	}
	if (flag==0){
		printf("so %d la so nguyen to ",a);
	}
	for (int i=2;i<b;i++){
		flag2=0;
		if (b%i==0){
			flag2=1;
			break;
		}
	}
	if (flag2==0){
		printf("so %d la so nguyen to ",b);
	}
	

}

int main(){
	int a,b;
	printf("moi ban nhap so nguyen 1 : ");
	scanf("%d",&a);
	printf("moi ban nhap so nguyen 2 : ");
	scanf("%d",&b);
	soNguyen(a,b);
	
	return 0;
}
