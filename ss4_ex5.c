#include<stdio.h>
int main(){
	int a, b, c;
	printf("moi ban nhap vao 3 so nguyen\n ");
	scanf("%d %d %d", &a, &b, &c);
	if( a < c && c < b || b < c && c < a ){
		printf(" %d nam giua %d va %d", c, a, b);
	}
	else{
		printf("so %d khong nam giua %d va %d", c, a, b );
	}
	return 0;
}