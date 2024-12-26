#include<stdio.h>
#include<string.h>
struct Book{
	int id;
	char name[50];
	char author[50];
	float price;
	char genre[50];
};
typedef struct Book book;
int main(){
	int chose;
	int n;
	book a[100];
	do{
		printf("MENU\n");
		printf("1.Nhap so luong va thong tin sach\n");
		printf("2.Luu thong tin sach vao file\n");
		printf("3.Lay thong tin sach tu file\n");
		printf("4.Hien thi thong tin sach\n");
		printf("5.Thoat\n");	
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){			
			printf("Moi ban nhap vao so luong sach: ");
			scanf("%d", &n);
			fflush(stdin);
			for(int i = 0; i < n; i++){
				a[i].id = i + 1;
				printf("ID: %d\n", a[i].id);
 				printf("Ten sach thu %d: ", i + 1);
 				fgets(a[i].name,50,stdin);
 				int len = strlen(a[i].name);
 				if(a[i].name[len - 1] == '\n'){
 					a[i].name[len - 1] = '\0';
				}
				printf("Ten tac gia: ");
				fgets(a[i].author,50,stdin);
 				len = strlen(a[i].author);
 				if(a[i].author[len - 1] == '\n'){
 					a[i].author[len - 1] = '\0';
				}
				printf("Gia tien: ");
				scanf("%f", &a[i].price);
				fflush(stdin);
				printf("The loai: ");
				fgets(a[i].genre,50,stdin);
 				len = strlen(a[i].genre);
 				if(a[i].genre[len - 1] == '\n'){
 					a[i].genre[len - 1] = '\0';
				}
			}
		}
		printf("\n");
		if(chose == 2){
			FILE *file;
			file = fopen("book.bin","wb");
			if(file == NULL){
				printf("Khong the mo file.");
			}
			fwrite(a, sizeof(a), n, file);
			fclose(file);
			printf("Thong tin sach da duoc luu vao file.");
		}
		printf("\n");
		if(chose == 3){
			FILE *file;
			file = fopen("book.bin", "rb");
			if(file == NULL){
				printf("Khong the mo file.");
			}
			int count = 0;
			while(fread(&a[count],sizeof(a), 1, file) == 1){
				count++;
			}
		}
		printf("\n");
		if(chose == 4){
			printf("Danh sach sach:\n");
            for (int i = 0; i < n; i++) {
                printf("Sach thu %d:\n", i + 1);
                printf("ID: %d\n", a[i].id);
                printf("Ten sach: %s\n", a[i].name);
                printf("Tac gia: %s\n", a[i].author);
                printf("Gia tien: %.2f\n", a[i].price);
                printf("The loai: %s\n", a[i].genre);
            }
		}
		printf("\n");
	}while(chose != 5);
	return 0;
}

	