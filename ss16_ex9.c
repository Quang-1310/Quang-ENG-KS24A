#include<stdio.h>
#include<string.h>
void contro();
int main(){
	int arr[] = {1,2,3,5,6,7,8,9};
	int length = sizeof(arr)/sizeof(int);
	int addnumber, addindex;
	printf("Mang ban dau ");
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Moi ban nhap so can them: ");
	scanf("%d", &addnumber);
	printf("Moi ban nhap vi tri muon them: ");
	scanf("%d", &addindex);
	printf("Mang sau khi them: ");
	contro(arr, length, addnumber, addindex);
}
void contro(int *ptr, int length, int number, int index){
	int i;     
	for(i = length - 1; i >= index - 1; i--){
		ptr[i + 1] = ptr[i];
	}
	ptr[index - 1] = number;	
	length++;
	for(int i = 0; i < length; i++){
		printf("%d ", ptr[i]);
	}
}