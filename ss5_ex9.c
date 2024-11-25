#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, a, b, c, sum, tbc, min, max;
	printf("Moi ban nhap vao 1 so 1-6 \n");
	printf("MENU\n" );
	printf("1.Nhap 3 so \n");
	printf("2.Tong 3 so ");
	printf("3.Trung binh cong 3 so \n");
	printf("4.So nho nhat \n");
	printf("5.So lon nhat \n");
	printf("6.Thoat \n");
	printf("Lua chon cua ban: ");
	while(1){
		scanf("%d", &n);
		if (n == 6){
			exit(0);
		}
		if(n == 1){
			printf("Moi ban nhap 3 so ");
			scanf("%d %d %d", &a, &b, &c);
			printf("\n");
			while(1){
				scanf("%d", &n);
				if(n == 2){
					sum = a + b + c;
					printf("%d + %d + %d = %d", a, b, c, sum);
					printf("\n");
				}
				if(n == 3){
					tbc = (a + b + c) / 3;
					printf("trung binh cong = %d",tbc);
					printf("\n");
				}
				if(n == 4){
					if(a < b && a < c){
						min = a;
						printf("min = %d", min);
					}
					else if(b < a && b < c){
						min = b;
						printf("min = %d", min);
					}
					else{
						min = c;
						printf("min = %d", min);
					}
					printf("\n");
					}
				if(n == 5){
					if (a > b && a > c){
						max = a;
						printf("max = %d", max);
					}
					else if (b > a && b > c){
						max = b;
						printf("max = %d", max);
					}
					else{
						max = c;
						printf("max = %d", max);
					}
					printf("\n");
				}
				if(n == 6 ){
					exit(0);
				}				
		}				
			}
		else{
			printf("Ban phai nhap yeu cau 1 truoc ");
		}
	}

	return 0;
}

