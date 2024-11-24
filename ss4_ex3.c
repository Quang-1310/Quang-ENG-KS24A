#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap vao 1 so nguyen ");
	scanf("%d",&n);
	if( n % 3 == 0 && n % 5 == 0){
		printf("so %d chia het cho ca 3 va 5", n);
	}
	else if ( n % 3 == 0){
		printf(" so %d chia het cho 3 khong chia het cho 5",n);
	}
	else if ( n % 5 == 0){
		printf(" so %d chia het cho 5 khong chia het cho 3",n);
	}
	else{
	printf(" so %d khong chia het cho 3 va 5",n);
	}
	return 0;
}