#include<stdio.h>
#include<math.h>
int main(){
	int a=6;
	int b=4;
	int S, H, T, TH;
	S=a+b;
	H=a-b;
	T=a*b;
	TH=a/b;
	printf("tong cua %d v� %d l�: %d\n ", a, b, S);
	printf("hieu cua %d v� %d l�: %d\n ", a, b, H);
	printf("tich cua %d v� %d l�: %d\n ", a, b, T);
	printf("thuong cua %d v� %d l�: %d\n ", a, b, TH);
	return 0;
}