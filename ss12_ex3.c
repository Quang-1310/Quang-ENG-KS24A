#include<stdio.h>
int giaiThua(n){
	int result = 1;
	for(int i = n; i > 0; i--){
		result *= i;
	}
	return result;
}
int main(){
	int number;
	printf("Moi ban nhap vao so nguyen ");
	scanf("%d", &number);
	int kq = giaiThua(number);
	printf("%d", kq);
}