#include<stdio.h>
int main(){
	int i;
	printf("Mang ban muon nhap co bao nhieu phan tu ");
	scanf("%d",&i);	
	int n[i];
	for(int j = 0; j < i; j++){
		printf("nhap phan tu thu %d ", j+ 1);			
		scanf("%d", &n[j]);
	}
	printf("Cac phan tu trong mang la: \n");
	for(int j = 0; j < i; j++){
		printf("arr[%d] = %d \n",j, n[j]);
	}

	return 0;
}
