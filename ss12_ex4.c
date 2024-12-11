#include<stdio.h>
int timmax(int arr[100]){
	int n, max;
	printf("Mang cua ban co bao nhieu phan tu "),
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Moi ban nhap vao phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr[100];
	int max = timmax(arr);
	printf("Gia tri lon nhat trong mang la %d", max);
}