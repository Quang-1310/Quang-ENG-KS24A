#include<stdio.h>
#include<string.h>
struct Product{
	int id;
	char name[100];
	float imprice;
	float exprice;
	int imquantity;
};
typedef struct Product product;
void output();
void add();
void fix();
void increse();
void decrese();
void ls();
void sell();
void revenue();
int main(){
	product a[100];
	float reven = 1000000;
	int chose;
	int quantity;
	do{
		printf("MENU\n");
		printf("1.Nhap so luong va thong tin san pham\n");
		printf("2.Hien thi danh sach san pham\n");
		printf("3.Nhap san pham\n");
		printf("4.Cap nhat thong tin san pham\n");
		printf("5.Sap xep san pham theo gia ban\n");
		printf("6.Tim kiem san pham\n");
		printf("7.Ban san pham\n");
		printf("8.Doanh thu hien tai\n");
		printf("9.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);	
		if(chose == 1){
			printf("Moi ban nhap vao so luong cac loai san pham nhap vao: ");
			scanf("%d", &quantity);
			for(int i = 0; i < quantity; i++){
				fflush(stdin);
				a[i].id = i + 1;
				printf("Moi ban nhap vao ten san pham %d: ", i + 1);
				fgets(a[i].name, sizeof(a[i].name), stdin);
				fflush(stdin);
				int len = strlen(a[i].name);
				if(a[i].name[len - 1] == '\n'){
					a[i].name[len - 1] = '\0';
				}
				printf("Moi ban dien gia tien nhap vao: ");
				scanf("%f", &a[i].imprice);
				fflush(stdin);
				printf("Moi ban dien gia tien xuat di: ");
				scanf("%f", &a[i].exprice);	
				printf("Moi ban dien so luong mat hang: ");
				scanf("%d", &a[i].imquantity);							
			}
		}
		printf("\n");
		if(chose == 2){
			output(a, quantity);
		}
		printf("\n");
		if(chose == 3){
			fflush(stdin);
			add(a,&quantity);
		}
		printf("\n");
		if(chose == 4){
			fflush(stdin);
			fix(&a,quantity);
		}
		printf("\n");
		if(chose == 5){
			fflush(stdin);
			char c;
			printf("a.Tang dan\n");
			printf("b.Giam dan\n");
			printf("Lua chon cua ban: ");
			scanf("%c", &c);
			if(c == 'a'){
				increse(a,quantity);
			}
			else if(c == 'b'){
				decrese(a,quantity);
			}
		}
		printf("\n");
		if(chose == 6){
			fflush(stdin);
			ls(a,quantity);
		}
		printf("\n");
		if(chose == 7){
			fflush(stdin);
			sell(a, quantity, &reven);
		}
		printf("\n");
		if(chose == 8){
			revenue(&reven);
		}	
	}while(chose != 9);
	return 0;
}

void output(product a[], int n){
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten mat hang:%s\n", a[i].name);
		printf("Gia nhap vao:%.3f\n", a[i].imprice);
		printf("Gia xuat di:%.3f\n", a[i].exprice);
		printf("So luong mat hang:%d\n", a[i].imquantity);
		printf("----------------------------------------\n");
	}
}
void add(product a[], int *n){
	char nameProduct[100];
	printf("Moi ban nhap them san pham: \n");
	printf("Moi ban nhap ten san pham moi: ");
	fgets(nameProduct, sizeof(nameProduct),stdin);
	int len = strlen(nameProduct);
	if(nameProduct[len - 1] == '\n'){
		nameProduct[len - 1] = '\0';
	}
	int flag = -1;
	for(int i = 0; i < *n; i++){
		if(strcmp(nameProduct, a[i].name) == 0){
			flag = 1;
			printf("Mat hang da co san.Moi ban nhap so luong can them vao:\n");
			int addQuantity;
			scanf("%d", &addQuantity);
			fflush(stdin);
			a[i].imquantity += addQuantity;
			break;
		}
	}
	if(flag == -1){
		a[*n].id = *n + 1;
		strcpy(a[*n].name, nameProduct);
		printf("Moi ban dien gia tien nhap vao: ");
		scanf("%f", &a[*n].imprice);
		fflush(stdin);
		printf("Moi ban dien gia tien xuat di: ");
		scanf("%f", &a[*n].exprice);	
		printf("Moi ban dien so luong mat hang: ");
		scanf("%d", &a[*n].imquantity);
		(*n)++;
	}
	for(int i = 0; i < *n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten mat hang:%s\n", a[i].name);
		printf("Gia nhap vao:%.3f\n", a[i].imprice);
		printf("Gia xuat di:%.3f\n", a[i].exprice);
		printf("So luong mat hang:%d\n", a[i].imquantity);
		printf("----------------------------------------\n");
	}	
}

void fix(product *a, int n){
	printf("Moi ban nhap vao vi tri mat hang can sua: ");
	int index;
	scanf("%d", &index);
	fflush(stdin);
	printf("Moi ban nhap ten mat hang moi: ");
	fgets(a[index - 1].name, 50, stdin);
	int len = strlen(a[index - 1].name);
	if (a[index - 1].name[len - 1] == '\n'){
        a[index - 1].name[len - 1] = '\0';
    }	
	printf("Moi ban dien gia tien nhap vao: ");
	scanf("%f", &a[index - 1].imprice);
	fflush(stdin);
	printf("Moi ban dien gia tien xuat di: ");
	scanf("%f", &a[index - 1].exprice);	
	printf("Moi ban dien so luong mat hang: ");
	scanf("%d", &a[index - 1].imquantity);
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten mat hang:%s\n", a[i].name);
		printf("Gia nhap vao:%.3f\n", a[i].imprice);
		printf("Gia xuat di:%.3f\n", a[i].exprice);
		printf("So luong mat hang:%d\n", a[i].imquantity);
		printf("----------------------------------------\n");
	}
}

void increse(product a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i -1; j++){
			if(a[j].exprice > a[j + 1].exprice){
				product temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten mat hang:%s\n", a[i].name);
		printf("Gia nhap vao:%.3f\n", a[i].imprice);
		printf("Gia xuat di:%.3f\n", a[i].exprice);
		printf("So luong mat hang:%d\n", a[i].imquantity);
		printf("----------------------------------------\n");
	}
}
void decrese(product a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i -1; j++){
			if(a[j].exprice < a[j + 1].exprice){
				product temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten mat hang:%s\n", a[i].name);
		printf("Gia nhap vao:%.3f\n", a[i].imprice);
		printf("Gia xuat di:%.3f\n", a[i].exprice);
		printf("So luong mat hang:%d\n", a[i].imquantity);
		printf("----------------------------------------\n");
	}
}

void ls(product a[],int n){
	char search[100];
	printf("Moi ban nhap ten mat hang can tim: ");
	fgets(search, sizeof(search), stdin);
	int len = strlen(search);
	if(search[len - 1] == '\n'){
		search[len - 1] = '\0';
	}
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(search, a[i].name) == 0){
			flag = 1;
			printf("Mat hang ban tim la: \n");
			printf("ID:%d\n", a[i].id);
			printf("Ten mat hang:%s\n", a[i].name);
			printf("Gia nhap vao:%.3f\n", a[i].imprice);
			printf("Gia xuat di:%.3f\n", a[i].exprice);
			printf("So luong mat hang:%d\n", a[i].imquantity);
			printf("----------------------------------------\n");
			break;
		}
	}
	if(flag == - 1){
		printf("Mat hang ban tim khong co trong cua hang\n");
	}
}

void sell(product a[], int n, float *reven){
	char sellProduct[100];
	printf("Moi ban nhap ten mat hang can ban: ");
	fgets(sellProduct, sizeof(sellProduct), stdin);
	int len = strlen(sellProduct);
	if(sellProduct[len - 1] == '\n'){
		sellProduct[len - 1] = '\0';
	}
	int sellQuantity;
	printf("Moi ban nhap so luong can ban: ");
	scanf("%d", &sellQuantity);
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(sellProduct, a[i].name) == 0){
			flag = i;	
			if(sellQuantity > a[i].imquantity){
				printf("Khong con du hang\n");
			break;
			}
			else if(a[i].imquantity == 0){
				printf("Het hang\n");
				break;
			}
			else{
				*reven += sellQuantity * a[i].exprice;
				a[i].imquantity -= sellQuantity;
			}		
			break;
		}
	}
	if(flag == - 1){
		printf("Mat hang ban can ban khong co trong cua hang\n");
	}	
}

void revenue(float *reven){
	printf("Doanh thu hien tai la: %f\n", *reven);
}