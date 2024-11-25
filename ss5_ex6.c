#include<stdio.h>
int main(){
	float a, b, result;
	int chosse;
	printf(" moi ban nhap vao 2 so nguyen ");
	scanf("%f %f", &a, &b);
	printf("CALCULATOR\n");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tich 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	printf("Lua chon cua ban\n");
	while(1){
		scanf("%d", &chosse);
			if(chosse == 1){
				result = a + b;
				printf("%.0f\n",result);
			}
			if(chosse == 2){
				result = a - b;
			   	printf("%.0f\n",result);
			}
			if(chosse == 3){
				result = a * b;
				printf("%.0f\n",result);
			}
			if(chosse == 4){
				result = a / b;
				printf("%.2f\n",result);
			}
			if(chosse == 5){
				break;
			}
	}
	return 0;
}