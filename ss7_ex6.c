#include<stdio.h>
int main(){
	int numbers[5] = {1,3,7,4,8};
	printf("cac phan tu co trong mang cu la ");
	for(int i = 0; i < 5; i++){
		printf("%d ", numbers[i]);
	}	
	for(int i = 0; i < 5; i++){
		if(numbers[i] % 2 == 0){
			numbers[i] += 3;
		}
		else if(numbers[i] % 2 != 0){
			numbers[i] += 2;
		}
	}
	printf("\n");
	printf("cac phan tu co trong mang moi la ");
	for(int i = 0; i < 5; i++){
		printf("%d ", numbers[i]);
	}
	return 0;
}
