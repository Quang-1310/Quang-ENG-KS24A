#include<stdio.h>
int main(){
	int temp, arr[5] = {5,9,3,1,8};
	int arrSize = sizeof(arr)/sizeof(int);
	printf("Mang chua duoc sap xep ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5 - 1 - i; j++){
			if(arr[j + 1] < arr[j]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\n");
	printf("Mang da duoc sap xep ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	int number, flag = -1, left = 0, right = arrSize - 1;
	printf("Moi ban nhap vao 1 so nguyen can tim kiem ");
	scanf("%d", &number);
	while(left <= right){
		int mid = (left + right) / 2;
		if( arr[mid] == number){
			flag = 1;
			printf("vi tri cua phan tu do trong mang la arr[%d]", mid);
			break;
		}
		else{
			if(number < arr[mid]){
				right = mid - 1;
			}
			if(number > arr[mid]){
				left = mid + 1;
			}
		}
	}
	if(flag == -1){
		printf("Phan tu khong co trong mang");		
	}	
	return 0;
}