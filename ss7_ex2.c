#include<stdio.h>
int main(){
	printf("Moi ban nhap vao 5 phan tu \n");
	int n[5];
	for(int i = 0; i < 5; i++){
		printf("Moi ban nhap phan tu thu %d ", i + 1);
		scanf("%d",&n[i]);
	}
	printf("Cac phan tu trong mang la \n");
	for(int i = 0; i < 5; i++){
		printf("arr[%d] = %d \n",i, n[i]);
	}
	return 0;
}