#include<stdio.h>
void ptr(int *m, int *n){
	printf("m = %d\n", *m);
	printf("n = %d\n", *n);
	int result = *m + *n;
	printf("kq = %d\n", result);

}
int main(){
	int a = 5;
	int b = 10;
	ptr(&a, &b);
	return 0;
}