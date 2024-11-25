#include<stdio.h>
int main(){
	int a, b, originalA, originalB, temporary;
	printf("moi ban nhap vao 2 so nguyen ");
	scanf("%d %d", &a, &b);
	originalA = a;
	originalB = b;
	while(b!=0){
			temporary = b;
			b = a % b;
			a = temporary;
	}
	b = (originalA * originalB) / a;
	printf("uoc chung lon nhat cua %d %d la: %d \n", originalA, originalB, a);	
	printf("boi chung nho nhat cua %d %d la: %d \n", originalA, originalB, b);
	return 0;
}