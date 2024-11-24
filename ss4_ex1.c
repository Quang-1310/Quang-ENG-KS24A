#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	if(n==0){
		printf("khong la so am va khong la so duong");
	}
	if(n>0){
		printf("so duong");
	}
	if(n<0){
		printf("so am");
	}
		return 0;
}