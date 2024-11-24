#include<stdio.h>
int main(){
	int a, b, c;
	printf("moi ban nhap vao 3 canh cua 1 tam giac ");
	scanf(" %d %d %d", &a, &b, &c);
	if( a + b > c && a + c > b && b + c > a){
		printf(" %d %d %d la 3 canh cua tam giac ",a, b, c);
	}
	else{
		printf(" %d %d %d khong phai 3 canh cua tam giac", a, b, c);
	}
	return 0;
}