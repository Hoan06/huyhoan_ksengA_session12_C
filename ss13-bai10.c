#include <stdio.h>
void addItem(int array[],int size ){
	for (int i=0;i<size;i++){
		printf("nhap gia tri cho array[%d] ",i);
		scanf("%d",&array[i]);
	}
}
void showItem(int array[],int size){
	for (int i=0;i<size;i++){
		printf("mang array[%d] : %d\n",i,array[i]);
	}
}
void addOneItem (int array[],int *size,int index,int n){
	for (int i=*size+1;i>=index;i--){
		array[i]=array[i-1];
	}
	array[index]=n;
	*size=*size+1;
}
void moveItem(int array[],int *size,int index2 ){
	for (int i=index2;i<*size-1;i++){
		array[i]=array[i+1];
	}
	*size=*size-1;
}
void updateItem(int array[],int index3,int n2){
	array[index3]=n2;
}
void bubleSort(int array[],int size,int index4){
	if (index4==1){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;j++){
				if (array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			    }
			}
		}
	}
	if (index4==2){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;j++){
				if (array[j]<array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			    }
			}
		}
	}
}
void findItem(int array[],int size,int index5,int n3,int start,int end,int mid,int count){
	if (index5==1){
        count=0;
		for (int i=0;i<size;i++){
		    if (array[i]==n3){
			    printf("phan tu %d o vi tri %d \n",n3,i);
			    int count=1;
		    }
	    }
	}
	if (index5==2){
        count=0;
		start=0;
		end=size-1;
		while (start<=end){
			mid=start+(end-start)/2;
		    if (array[mid]==n3){
			    printf("phan tu %d o vi tri %d \n",n3,mid);
			    count=1;
			    break;
		    } else if (array[mid]>n3){
			    end=mid-1;
		    } else {
			    start=mid+1;
		    }
		}
	}
	if (count!=1){
		printf("phan tu khong co trong mang ");
	}
}


int main(){
	int chose;
	int array[100];
	int size;
	int index,n,index2,index3,n2,index4,index5,n3,mid,start,end,count;
	do {
		printf("MENU \n1.nhap so phan tu can nhap va gia tri cac phan tu \n2.in ra gia tri cac phan tu dang quan li \n3.them mot phan tu vao vi tri chi dinh \n4.xoa mot phan tu o vi tri chi dinh \n5.sua mot phan tu o vi tri chi dinh \n6.sap xep cac phan tu \n7.tim kiem phan tu nhap vao \n8.thoat \n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("moi ban nhap so phan tu ");
	            scanf("%d",&size);
				addItem(array,size);
				break;
			case 2:
				showItem(array,size);
				break;
			case 3:
				printf("moi ban nhap vi tri muon them ");
				scanf("%d",&index);
				printf("moi ban nhap gia tri ");
				scanf("%d",&n);
				addOneItem(array,&size,index,n);
				
				break;
			case 4:
				printf("moi ban nhap vi tri muon xoa ");
				scanf("%d",&index2);
				moveItem(array,&size,index2);
				break;
			case 5:
				printf("moi ban nhap vi tri muon sua ");
				scanf("%d",&index3);
				printf("moi nhap gia tri ");
				scanf("%d",&n2);
				updateItem(array,index3,n2);
				break;
			case 6:
				printf("1.sap xep tang dan \n");
				printf("2.sap xep giam dan \n");
				scanf("%d",&index4);
				bubleSort(array,size,index4);
				break;
			case 7:
				printf("1.tim kiem tuyen tinh \n");
				printf("2.tim kiem nhi phan \n");
				scanf("%d",&index5);
				printf("nhap phan tu muon tim ");
				scanf("%d",&n3);
				findItem(array,size,index5,n3,start,end,mid,count);
				break;
			case 8:
				break;
			default :
			printf("khong co lua chon nao nhu tren \n");					
		}
	} while (chose!=8);
	
	return 0;
}
