#include<stdio.h>
int main(){
	int n[8] = {4,1,7,1,9,4,3,1};
	int max = 0, number = n[0];
	for(int i = 0; i < 8; i++){
		int count = 0;
		for(int j = 0; j < 8; j++){
			if(n[i] == n[j] ){
				count++;
			}
		}
		if(count > max){
			max = count;
			number = n[i];
		}
	}
	printf("phan tu xuat hien nhieu nhat la %d \n", number);
	printf("so lan xuat hien la %d \n", max);
	return 0;
}