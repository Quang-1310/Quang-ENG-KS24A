#include<stdio.h>
#include<string.h>
void contro();
int main(){
	int arr[] = {1,2,3,9,4,5,6,7,8,9};
	int length = sizeof(arr)/sizeof(int);
	int deleteIndex;
	printf("Mang ban dau ");
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Moi ban nhap vi tri muon xoa: ");
	scanf("%d", &deleteIndex);
	printf("Mang sau khi xoa: ");
	contro(arr, length, deleteIndex);
}
void contro(int *ptr, int length, int dele ){
	for(int i = dele - 1; i < length; i++){
		ptr[i] = ptr[i + 1];
	}
	length--; 
	for(int i = 0; i < length; i++){
		printf("%d ", ptr[i]);
	}
}