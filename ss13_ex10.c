#include<stdio.h>
#include<stdlib.h>

void input(int n, int arr[100]){
	for(int i = 0; i < n; i++){
		printf("Moi ban nhap vao phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);		
	}
}
void output(int n, int arr[100]){
	for(int i = 0; i < n; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
}
void add(int n, int arr[100]){
	int i, index, number;
	printf("Moi ban nhap vao vi tri can them ");
	scanf("%d", &index);
	printf("Moi ban nhap vao phan tu can them ");
	scanf("%d", &number);
	for(int i = n; i > index - 1; i--){
		arr[i] = arr[i - 1];
	}
	arr[index - 1] = number;
	n++;
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
void fix(int n, int arr[100]){
	int index, number;
	printf("Moi ban nhap vao vi tri can sua ");
	scanf("%d", &index);
	printf("Moi ban nhap vao phan tu muon sua ");
	scanf("%d", &number);
	arr[index - 1] = number;
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
void dele(int n, int arr[100]){
	int i, index;
	printf("Moi ban nhap vao vi tri muon xoa ");
	scanf("%d", &index);
	for(int i = index - 1; i < n; i++){
		arr[i] = arr[i + 1];
	}
	n--;
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
}
void sapXepTangDan(int n, int arr[100]) {  
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - 1 - i; j++){  
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}  
}  

void sapXepGiamDan(int n, int arr[100]){  
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - 1 - i; j++) {  
            if (arr[j] < arr[j + 1]) {  
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }  
    for(int i =0; i < n; i++){
    	printf("%d ",arr[i]);
	}
} 
void timKiemNhiPhan(int n, int arr[100]){
	int number, flag = -1, left = 0, right = n - 1;
	printf("Moi ban nhap vao 1 so nguyen can tim kiem ");
	scanf("%d", &number);
	while(left <= right){
		int mid = (left + right) / 2;
		if( arr[mid] == number){
			flag = 1;
			printf("vi tri cua phan tu do trong mang la arr[%d]", mid);
			break;
		}
		else{
			if(number < arr[mid]){
				right = mid - 1;
			}
			if(number > arr[mid]){
				left = mid + 1;
			}
		}
	}
	if(flag == -1){
		printf("Phan tu khong co trong mang");		
	}
}
void timKiemTuyenTinh(int n, int arr[100]){
	int number, flag = -1;
	printf("Moi ban nhap vao phan tu can tim ");
	scanf("%d", &number);
	for(int i = 0; i < n; i++){
		if(arr[i] == number){
			flag = 1;
			printf("Phan tu ban tim o vi tri arr[%d]", i);
		}
	}
	if(flag == -1){
		printf("Phan tu ban tim khong co trong mang");
	}
}


int main(){
	int arr[100];
	int chose, n;
	printf("MENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly \n");
	printf("3.Them 1 phan tu vao vi tri chi dinh\n");
	printf("4.Sua 1 phan tu o vi tri chi dinh\n");
	printf("5.Xoa 1 phan tu o vi tri chi dinh\n");
	printf("6.Sap xep cac phan tu\n");
	printf("7.Tim kiem phan tu nhap vao\n");	
	printf("8.Thoat\n");					
	while(1){
		printf("Lua chon cua ban: ");
		scanf("%d",&chose);
		if(chose == 8){
			exit(0);
		}
		if(chose == 1){
			printf("Mang cua ban co bao nhieu phan tu ");
			scanf("%d", &n);
			input(n, arr);		
			while(1){
				printf("Lua chon cua ban: ");
				scanf("%d",&chose);	
				if(chose == 2){
					output(n, arr);
				}
				printf("\n");
				if(chose == 3){
					add(n, arr);
				}
				printf("\n");
				if(chose == 4){
					fix(n, arr);
				}
				printf("\n");
				if(chose == 5){
					dele(n, arr);
				}
				printf("\n");
				if(chose == 6){
					char luaChon;
					getchar();
					printf("Ban muon sap xep theo thu tu nao \n");
					printf("a.Sap xep giam dan \n");
					printf("b.Sap xep tang dan \n");
					printf("Lua chon cua ban ");
					scanf("%c", &luaChon);
					if(luaChon == 'a'){
						sapXepGiamDan(n, arr);
					}
					if(luaChon == 'b'){
						sapXepTangDan(n, arr);
					}					
				}
				printf("\n");
				if(chose == 7){
					char luaChon;
					getchar();
					printf("Ban muon tim kiem phan tu theo cach nao \n");
					printf("a.Tim kiem tuyen tinh \n");
					printf("b.Tim kiem nhi phan \n");
					printf("Lua chon cua ban ");
					scanf("%c", &luaChon);
					if(luaChon == 'a'){
						timKiemTuyenTinh(n, arr);
					}
					if(luaChon == 'b'){
						timKiemNhiPhan(n, arr);
					}
				}
				printf("\n");
				if(chose == 8){
					exit(0);
				}				
			}
		}
		else{
			printf("Ban phai nhap lua chon 1 truoc \n");
		}
	}
	return 0;
}