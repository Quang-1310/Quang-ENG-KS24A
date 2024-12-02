#include<stdio.h>
int main(){
	int n, i, arr[100];
	printf("Ban muon nhap vao mang bao nhieu phan tu ");
	scanf("%d",&i);
	for(int j = 0; j < i; j++){
		printf("Moi ban nhap vao phan tu thu %d ", j+1);
		scanf("%d",&arr[j]);
	}
	printf("Moi ban nhap vao vi tri can xoa ");
	scanf("%d",&n);
	for(int i = n -1; i < 5; i++){
		arr[i] = arr[i+1];
	}
	for(int i = 0; i < 4; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
