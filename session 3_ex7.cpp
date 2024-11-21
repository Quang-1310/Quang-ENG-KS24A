#include<stdio.h>
int main(){
	int abcd, a, b, c, d, sum;
	printf("moi bann nhap vao so co 4 chu so ");
	scanf("%d",&abcd);
	a= abcd/1000;
	b= (abcd%1000)/100;
	c= (abcd%1000)%100/10;
	d= (abcd%1000)%100%10;
	sum= a+b+c+d;
	printf("tong cac chu so co trong so ban nhap la %d",sum);
	return 0;
}