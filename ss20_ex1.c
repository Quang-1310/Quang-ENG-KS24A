#include<stdio.h>
#include<string.h>
struct Book{
	int id;
	char name[50];
	char author[50];
	float price;
};
void output();
void add(); 
void fix();
void dele();
void increse();
void decrese();
void ls();
typedef struct Book book;
int main(){
	int chose;
	int size;
	book a[50];
	
	do{
		printf("MENU\n");
		printf("1.Nhap so luong va thong tin sach\n");
		printf("2.Hien thi thong tin sach\n");
		printf("3.Them sach vao vi tri chi dinh\n");
		printf("4.Xoa sach theo ma\n");
		printf("5.Cap nhat thong tin sach theo ma\n");
		printf("6.Sap xep sach theo gia\n");
		printf("a.Tang dan\n");
		printf("b.Giam dan\n");
		printf("7.Tim kiem sach theo ten\n");
		printf("8.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){
			printf("Moi ban nhap so luong sach: ");
			scanf("%d", &size);
			fflush(stdin);
			for(int i = 0; i < size; i++){
				fflush(stdin);
				printf("Moi ban nhap ten sach thu %d: ", i + 1);
				fgets(a[i].name,sizeof(a[i].name),stdin);
				int len = strlen(a[i].name);
				if(a[i].name[len - 1] == '\n'){
					a[i].name[len - 1] = '\0';
				}
				printf("Moi ban nhap ten tac gia: ");
				fgets(a[i].author,sizeof(a[i].author),stdin);
				fflush(stdin);
				int lenth = strlen(a[i].author);
				if(a[i].author[lenth - 1] == '\n'){
					a[i].author[lenth - 1] = '\0';
				}
				printf("Moi ban nhap gia tien: ");
				scanf("%f", &a[i].price);			
			}
		}
		printf("\n");
		if(chose == 2){
			output(a,size);
		}
		printf("\n");
		if(chose == 3){
			add(a,&size);
		}
		printf("\n");
		if(chose == 4){
			dele(a, &size);
		}
		printf("\n");
		if(chose == 5){	
			fflush(stdin);		
			fix(&a, size);
		}			
		printf("\n");
		if(chose == 6){
			fflush(stdin);
			char c;
			printf("a.Tang dan\n");
			printf("b.Giam dan\n");		
			printf("Lua chon cua ban: ");
			scanf("%c", &c);
			if(c == 'a'){
				increse(a, size);
			}
			else if(c == 'b'){
				decrese(a, size);
			}	
		}
		printf("\n");
		if(chose == 7){
			fflush(stdin);
			ls(a,size);
		}
		printf("\n");
	}while(chose != 8);
	return 0;
}
void output(book *a, int size){
	for(int i = 0; i < size; i++){
		a[i].id = i + 1;
		printf("ID:%d\n", i + 1);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");
	}
}
void add(book a[], int *n){
	int index;
	printf("Moi ban nhap vao vi tri can them sach: ");
	scanf("%d", &index);
	fflush(stdin);	
	for(int i = *n; i > index - 1; i--){
		a[i] = a[i - 1];
	}
	printf("Moi ban nhap ten sach: ");
	fgets(a[index - 1].name,50,stdin);
	int len = strlen(a[index - 1].name);
	if(a[index - 1].name[len - 1] == '\n'){
		a[index - 1].name[len - 1] = '\0';
	}
	printf("Moi ban nhap ten tac gia: ");
	fgets(a[index - 1].author,sizeof(a[index - 1].author),stdin);
	fflush(stdin);
	int lenth = strlen(a[index - 1].author);
	if(a[index - 1].author[lenth - 1] == '\n'){
		a[index - 1].author[lenth - 1] = '\0';
	}
	printf("Moi ban nhap gia tien: ");
	scanf("%f", &a[index - 1].price);
	(*n)++;
	for(int i = 0; i < *n; i++){
		a[i].id = i + 1;
	}
	for(int i = 0; i < *n; i++){
		printf("ID:%d\n", i + 1);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");	
	}		
}

void dele(book a[], int *n){
	int index;
	int flag = -1;
	printf("Moi ban nhap vi tri muon xoa: ");
	scanf("%d", &index);
	fflush(stdin);
	for(int i = 0; i < *n; i++){
		if(index == a[i].id){
			flag = 1;
			for(int j = i; j < *n; j++){
				a[j] = a[j + 1];
			}
			(*n)--;		
		}
	}
	if(flag == -1){
		printf("Vi tri ban nhap khong co trong danh sach\n");
	}
	for(int i = 0; i < *n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");	
	}
}

void fix(book *a, int n){
	printf("Moi ban nhap vao vi tri can sua: ");
	int index;
	scanf("%d", &index);
	fflush(stdin);
	printf("Moi ban nhap ten cuon sach moi: ");
	fgets(a[index - 1].name, 50, stdin);
	int len = strlen(a[index - 1].name);
	if (a[index - 1].name[len - 1] == '\n'){
        a[index - 1].name[len - 1] = '\0';
    }	
	printf("Moi ban nhap ten tac gia: ");
	fgets(a[index - 1].author,sizeof(a[index - 1].author),stdin);
	fflush(stdin);
	int lenth = strlen(a[index - 1].author);
	if(a[index - 1].author[lenth - 1] == '\n'){
		a[index - 1].author[lenth - 1] = '\0';
	}
	printf("Moi ban nhap gia tien: ");
	scanf("%f", &a[index - 1].price);
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", i + 1);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");	
	}
}

void increse(book a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i -1; j++){
			if(a[j].price > a[j + 1].price){
				book temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");	
	}
}
void decrese(book a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i -1; j++){
			if(a[j].price < a[j + 1].price){
				book temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ten sach: %s\n", a[i].name);
		printf("Ten tac gia: %s\n", a[i].author);
		printf("Gia tien: %.3f\n",a[i].price);
		printf("\n");	
	}
}
void ls(book a[], int n){
	char nameBook[50];
	printf("Moi ban nhap ten sach can tim: ");
	fgets(nameBook, 50, stdin);
	int len = strlen(nameBook);
	if(nameBook[len - 1] == '\n'){
		nameBook[len - 1] = '\0';
	}
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(nameBook, a[i].name) == 0){
			flag = 1;
			printf("Cuon sach ban tim la: \n");
			printf("ID:%d\n", a[i].id);
			printf("Ten sach: %s\n", a[i].name);
			printf("Ten tac gia: %s\n", a[i].author);
			printf("Gia tien: %.3f\n",a[i].price);
			printf("\n");
		
		}
	}
	if(flag == -1){
		printf("Khong co cuon sach ban tim\n");
	}
}