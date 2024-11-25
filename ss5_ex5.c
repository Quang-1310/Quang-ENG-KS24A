#include<stdio.h>
int main(){
	int j = 1, mul = 1;
	for(int m = 1; m < 10; m++){
		printf("bang cuu chuong %d la: \n", j);
		for(int i = 1; i <= 10; i++){
			mul = m * i;
			printf("%d\n", mul);
		}	
		printf("\n");
		j += 1;
	}

	return 0;
}