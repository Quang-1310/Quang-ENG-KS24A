#include<stdio.h>
int main(){
	int max, min, numbers[5] = {1,3,7,4,8};
	max = numbers[0];
	min = numbers[0];
	for(int i = 0; i < 5; i++){
		if(numbers[i] > max){
			max = numbers[i];
		}
		if(numbers[i] < min){
			min = numbers[i];
		}
	}
	printf("Phan tu lon nhat trong mang la %d\n", max);
	printf("Phan tu nho nhat trong mang la %d\n", min);
	return 0;
}
