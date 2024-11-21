#include<stdio.h>
int main(){
	int abcd, a, b, c, d, reversed, dcba;
	printf("moi bann nhap vao so co 4 chu so ");
	scanf("%d",&abcd);
	a= abcd/1000;
	b= (abcd%1000)/100;
	c= (abcd%1000)%100/10;
	d= (abcd%1000)%100%10;
	reversed=d*1000+c*100+b*10+a;
	printf("so nghich dao cua so ban nhap la %d", reversed);
	return 0;
}