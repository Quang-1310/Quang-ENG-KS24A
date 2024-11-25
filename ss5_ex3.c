#include<stdio.h>
int main(){
	int n, sum = 0;
	printf(" moi ban nhap vao 1 so nguyen duong ");
	scanf("%d", &n);
	for(int i=1; i <= n; i++){
		sum += i;
	}
	printf("tong cac so tu 1 den %d la %d", n, sum);
	return 0;
}
