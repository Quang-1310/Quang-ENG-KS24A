#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, x, delta;
	double x1, x2;
	printf("Moi ban nhap 3 so a b c de dc phuong trinh bac 2 ax^2+bx+c=0: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh vo so nghiem");
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
		if(b != 0){
			if(c == 0){
				x = 0;
				printf("Phuong trinh co 1 nghiem x = %d", x);
			}
			if(c != 0){
				x = -c/b;
				printf(" Phuong trinh co 1 nghiem x = %d", x);
			}
		}
	}
	if(a != 0){
		delta = b*b -4*a*c;
			if(delta < 0){
				printf("Phuong trinh vo nghiem");
			}
			else if(delta == 0){
				x1 = -b/2*a;
					printf("Phuong trinh co nghiem kep x = %.2lf ", x1);
			}
			else{
				x1 = (-b - sqrt(delta))/ (2*a);
				x2 = (-b + sqrt(delta))/ (2*a);
					printf("Phuong trinh co 2 nghiem phan biet x1 = %.2lf x2 = %.2lf", x1, x2);
			}
	}
	
	return 0;
}
