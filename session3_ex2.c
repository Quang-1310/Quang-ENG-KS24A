#include<stdio.h>
int main(){
	float Celsius, Fahrenheit;
	printf("moi ban nhap vao do C ");
	scanf("%f", &Celsius);
	Fahrenheit = Celsius * 9/5 + 32;
	printf(" %.2f do C bang %.2f do F", Celsius, Fahrenheit);
	return 0;
}