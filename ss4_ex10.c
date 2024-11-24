#include<stdio.h>
int main(){
	int a, b, c, temporary;
	printf(" moi ban nhap vao 3 so nguyen ");
	scanf(" %d %d %d", &a, &b, &c);
	if(a > b){
		temporary = a;
		a = b;
		b = temporary; 
	}
	if(a > c){
		temporary = a;
		a = c;
		c = temporary;
	}
	if(b > c){
		temporary = b;
		b = c;
		c = temporary;
	}
	printf(" day so sap xep tu be den lon la %d %d %d", a, b, c);
	return 0;
}