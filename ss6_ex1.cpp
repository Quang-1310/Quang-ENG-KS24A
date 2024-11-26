#include<stdio.h>
int main(){
	int a, b, c, d, e, sum = 0;
	printf("Moi ban nhap vao 5 so nguyen ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 2 != 0){
		sum = sum + a;
	}
	if(b % 2 != 0){
		sum = sum + b;
	}
	if(c % 2 != 0){
		sum = sum + c;
	}
	if(d % 2 != 0){
		sum = sum + d;
	}
	if(e % 2 != 0){
		sum = sum + e;
	}
	printf("Tong cac so le = %d", sum);
	return 0;				
}