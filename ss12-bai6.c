#include <stdio.h>

int check(int num, int num1){
	int sum,sum1;
	for (int i=1;i<num;i++){
		if (num%i==0){
			sum+=i;
		}
	}
	if (sum==num){
		printf("so %d la so hoan hao \n",num);
	} else {
		printf("so %d khong phai la so hoan hao \n",num);
	}
	for (int i=1;i<num1;i++){
		if (num1%i==0){
			sum1+=i;
		}
	}
	if (sum1==num1){
		printf("so %d la so hoan hao ",num1);
	} else {
		printf("so %d khong phai la so hoan hao ",num1);
	}
	
	
	return 1;
}

int main(){
	int num,num1;
	printf("moi ban nhap so nguyen thu nhat ");
	scanf("%d",&num);
	printf("moi ban nhap so nguyen thu hai ");
	scanf("%d",&num1);
	check(num,num1);
	
	
	return 0;
}
