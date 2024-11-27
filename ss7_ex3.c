#include<stdio.h>
int main(){
	int max, dem = 0, numbers[5] = {2,7,8,9,1};
	max = numbers[0];
	printf(" Cac so chan co trong mang la: ");
	for(int i = 0; i < 5; i++){
		if(numbers[i] % 2 ==0){
			printf("%d ", numbers[i]);
			dem++;
		}	
	}
	if(dem == 0 ){
		printf("Trong mang khong co so chan");
	}
	return 0;
}
