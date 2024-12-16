#include<stdio.h>
int main(){
	int a = 10;
	int *ptr = &a;
	printf("gia tri cua bien la: %d\n", a);
	printf("dia chi cua bien la: %d\n", &a);
	return 0;
}