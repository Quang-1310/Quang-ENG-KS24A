#include<stdio.h>
int main(){
	int i, dem = 0;
	printf(" Moi ban nhap vao so phan tu cua bang ");
	scanf("%d", &i);
	int a[i];
	for(int n = 0; n < i; n++){
		printf("Moi ban nhap phan tu thu %d ", n + 1);
		scanf("%d", &a[n]);
	}	
	for(int n = 0; n < i; n++){
		dem = 0;
		for(int j = 1; j <= a[n]; j++){
			if(a[n] % j == 0){
				dem ++;
			}
		}
		if(dem == 2){
			printf("so nguyen to co trong mang la: ");
			printf("%d\n", a[n]);
		}		
	}
	return 0;
}