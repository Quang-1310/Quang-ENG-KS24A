#include<stdio.h>
int main(){
	const float pi = 3.14;
	int r;
	float chuvi, dientich;
	printf("nhap ban kinh r:");
 	scanf("%d", &r);
 	chuvi = 2 * pi * r;
 	dientich = pi * r * r;
 	printf(" chu vi hinh tron la %.2f\n", chuvi);
 	printf(" dien tich hinh tron la %.2f\n", dientich);
 	return 0;
}