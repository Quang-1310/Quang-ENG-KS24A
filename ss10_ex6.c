#include <stdio.h>  

int main() {  
    int x, arr[] = {1, 2, 3, 4, 2, 5, 2}; 
    int n = sizeof(arr) / sizeof(int); 
    int arr_1[100]; 
    int count = 0; 
    printf("Nhap 1 so nguyen : ");  
    scanf("%d", &x);  
    for(int i = 0; i < n; i++){
    	if(arr[i] == x){
    		arr_1[count] = i;
    		count++;
		}
	}
	if(count > 0){
		printf("phan tu %d xuat hien o cac vi tri: ", x);
		for(int i = 0; i < count; i++){
			printf("%d ", arr_1[i]);
		}
	}
	else{
		printf("phan tu khong co trong mang ");
	}
	return 0;
    
}