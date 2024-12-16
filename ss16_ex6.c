#include<stdio.h>
void ptr(int arr[], int searchValue){
	int flag = -1;
	int *ptr = arr;
	for(int i = 0; i < 6; i++){
		if(ptr[i] == searchValue){
			flag = 0;
			printf("vi tri phan tu %d la arr[%d]", searchValue, i);
		}
	}
	if(flag == -1){
		printf("phan tu ban can tim khong co trong mang");
	}
}
int main(){
	int searchValue;
	int arr[100] = {1,2,3,4,5,6};
	printf("Moi ban nhap so can tim ");
	scanf("%d", &searchValue);
	ptr(arr, searchValue);
	return 0;
}