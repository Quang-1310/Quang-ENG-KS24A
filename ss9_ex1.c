#include<stdio.h>
int main(){
	int i, arr[100];
	printf("Ban muon nhap vao mang bao nhieu phan tu ");
	scanf("%d",&i);
	for(int j = 0; j < i; j++){
		printf("Moi ban nhap vao phan tu thu %d ", j + 1);
		scanf("%d", &arr[j]);
	}
	int number, index;
	printf("Moi ban nhap vao vi tri ban muon them ");
	scanf("%d", &index);
	printf("Moi ban nhap vao so muon them ");
	scanf("%d", &number);
	for(int i = 5; i > index-1; i-- ){
		arr[i] = arr[i - 1];
	}
	arr[index-1] = number;
	for(int i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}