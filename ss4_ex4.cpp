#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap vao thang ");
	scanf("%d",&n);
	if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
		printf(" thang %d co 31 ngay", n);	
	}
	else if(n == 4 || n == 6 || n == 9 || n == 11){
		printf(" thang %d co 30 ngay", n);
	}
	else if(n == 2){
		printf(" thang %d co 28 ngay", n);
	}
	else{
		printf(" so thang khong hop le");
	}
	return 0;
}