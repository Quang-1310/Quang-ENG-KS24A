#include<stdio.h>
int tong(int a, int b){
	printf("Moi ban nhap so a ");
	scanf("%d", &a);
	printf("Moi ban nhap so b ");
	scanf("%d", &b);
	int sum = a + b;
	return sum;
}
int main(){
	int a, b;
	int result = tong(a,b);
	printf("tong cua 2 so la %d", result);
	return 0;
}