#include<stdio.h>
void ptr(int arr[], int newNumber, int index){
	int *ptr = arr;
	ptr[index - 1] = newNumber;
	for(int i = 0; i < 6; i++){
		printf("%d ", ptr[i]);
	}
}
int main(){
	int newNumber, index;
	int arr[100] = {1,2,3,4,5,6};
	printf("Moi ban nhap so can cap nhat ");
	scanf("%d", &newNumber);
	printf("Moi ban nhap vi tri can cap nhat ");
	scanf("%d", &index);
	ptr(arr, newNumber, index);
	return 0;
}