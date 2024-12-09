#include <stdio.h>

void findMaxValue(int arr[],int size){
	int maxValue=arr[0];
	for (int i=0;i<size;i++){
		if (arr[i]>maxValue){
			maxValue=arr[i];
		}
	}
	printf("phan tu lon nhat trong mang la %d ",maxValue);
}

int main(){
	int numbers[]={4,6,5,9,1,3};
	int size=sizeof(numbers)/sizeof(int);
	findMaxValue(numbers,size);
	
	return 0;
}
