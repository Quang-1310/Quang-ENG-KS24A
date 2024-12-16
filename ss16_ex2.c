#include<stdio.h>
void ptr(int *m, int *n){
	printf("Gia tri chua doi\n");
	printf("m = %d\n", *m);
	printf("n = %d\n", *n);
	int temp = *m;
	*m = *n;
	*n = temp;	
	printf("Gia tri da doi\n");
	printf("m = %d\n", *m);
	printf("n = %d\n", *n);
}
int main(){
	int a = 5;
	int b = 10;
	ptr(&a, &b);
	return 0;
}