#include<stdio.h>
void ham(int arr[]){
	int n;
	printf("Ham cua ban co bao nhieu phan tu ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Moi ban nhap phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int arr[100];
	ham(arr);
	return 0;
}