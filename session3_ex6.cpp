#include<stdio.h>
int main(){
	int d, h, S;
	printf("moi ban nhap vao do dai canh day ");
	scanf("%d",&d);
	printf("moi ban nhap vao do dai chieu cao ");
	scanf("%d",&h);
	S =  (h * d)/2;
	printf("dien tich tam giac la %d",S);
	return 0;
}