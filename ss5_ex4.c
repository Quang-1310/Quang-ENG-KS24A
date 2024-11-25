#include<stdio.h>
int main(){
	int i, mul = 1;
	printf("Moi ban nhap vao 1 so nguyen duong tu 1-9: ");
	scanf("%d",&i);
		printf("bang cuu chuong %d la: \n", i);
		for(int j = 1; j <= 10; j++){
			mul = i * j;
			printf("%d\n", mul);
		}	
		printf("\n");
	return 0;
}
