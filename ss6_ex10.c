#include<stdio.h>
int main(){
	int n, i, dem = 0, result;
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d", &n);
	for(int i = 2; i <= (n/2); i++){
		result = n % i;
		if(result == 0){
			dem += 1;
		}		
	}
	if(dem > 1){
		printf("so %d khong phai so nguyen to ", n);
	}
	else{
		printf("so %d la so nguyen to ", n);
	}
	return 0;
}