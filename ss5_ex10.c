#include<stdio.h>
int main(){
	int m, n, reverse = 0;
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d", &n);
	while(n > 0 ){
		reverse = reverse * 10 + n % 10;
		n = n / 10;
	}
	while(reverse > 0){
		printf("%d", reverse % 10);	
			reverse = reverse / 10;
		if(reverse > 0){
			printf(" ");
		}		
	}					
	return 0;
}