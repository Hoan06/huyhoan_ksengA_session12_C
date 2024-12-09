#include <stdio.h>

int inMang(int arr[]){
	for (int i=0;i<5;i++){
		printf("gia tri cua arr[%d] la %d \n",i,arr[i]);
	}
	return 1;
	
}

int main(){
	int arr[]={1,2,3,4,5};
	inMang(arr);
	
	return 0;
}
