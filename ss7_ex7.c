#include<stdio.h>
int main(){
	int i;
	printf(" Mang ban muon nhap co bao nhieu phan tu ");
	scanf("%d", &i);
	int numbers[i];
	for(int j=0; j < i; j++){
		printf(" nhap phan tu thu %d ", j+1);
		scanf("%d", &numbers[j]);
		if(numbers[j] % 2 == 0){
			while(numbers[j] % 2 == 0){
				printf("phan tu ban nhap phai la so le \n");
				printf(" nhap lai phan tu thu %d ", j + 1 );	
				scanf("%d", &numbers[j]);					
			}
		}
	}
	printf("cac phan tu trong mang la \n");
	for(int j=0; j < i; j++){
		printf("%d ", numbers[j]);
	}
	return 0;
}