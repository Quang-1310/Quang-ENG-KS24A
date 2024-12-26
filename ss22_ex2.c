#include<stdio.h>
struct account{
	char taiKhoan[100];
	char matKhau[100];
};
struct account acc[100];
int numberAcc = 0;
void loadAcc();
void dangNhap();
void dangKi();
void saveAcc();
int main(){
	int chose;
	do{
		printf("MENU\n");
		printf("1.Dang nhap\n");
		printf("2.Dang ki\n");
		printf("3.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){
			dangNhap();
		}
		printf("\n");
		if(chose == 2){
			dangKi();
		}
		printf("\n");
	}while(chose != 3);
	return 0;
}

void loadAcc(){
	FILE *file;
	file = fopen("acc.bin","rb");
	if(file == NULL){
		printf("Khong mo duoc file");
	}
	numberAcc = fread(&acc,sizeof(struct account),100,file);
	fclose(file);
}

void saveAcc(){
	FILE *file;
	file = fopen("acc.bin","wb");
	fwrite(acc,sizeof(struct account), numberAcc, file);
	fclose(file);	
}

void dangNhap(){
	int find = -1;
	fflush(stdin);
	if(numberAcc == 0){
		printf("Chua co account nao.");
		return;
	}
	struct account acc1;
	for(int i = 0; i < numberAcc; i++){
		printf("Moi ban nhap thong tin account: \n");
		printf("Tai khoan: ");
		fgets(acc1.taiKhoan,sizeof(acc1.taiKhoan),stdin);
		acc1.taiKhoan[strcspn(acc1.taiKhoan,"\n")] = '\0';
		fflush(stdin);
		printf("Nhap mat khau: ");
		fgets(acc1.matKhau,sizeof(acc1.matKhau),stdin);
		acc1.matKhau[strcspn(acc1.matKhau,"\n")] = '\0';
		fflush(stdin);
	}
	for(int i = 0; i < numberAcc; i++){
		if(strcmp(acc[i].taiKhoan, acc1.taiKhoan) == 0 && strcmp(acc[i].matKhau, acc1.matKhau) == 0){
            printf("Dang nhap thanh cong!\n");
            find = 1;
            break;
        }
	}
	if(find == -1){
		printf("Thong tin dang nhap khong chinh xac\n");
	}
}

void dangKi(){
	fflush(stdin);
	struct account newAcc; 
	printf("Moi ban nhap thong tin tai khoan: \n");
    printf("Nhap tai khoan: ");
    fgets(newAcc.taiKhoan, sizeof(newAcc.taiKhoan), stdin);
    newAcc.taiKhoan[strcspn(newAcc.taiKhoan, "\n")] = '\0'; 
    printf("Nhap mat khau: ");
    fgets(newAcc.matKhau, sizeof(newAcc.matKhau), stdin);
    newAcc.matKhau[strcspn(newAcc.matKhau, "\n")] = '\0'; 
    acc[numberAcc] = newAcc;
    numberAcc++;
    saveAcc();
    printf("Dang ki thanh cong!\n");
}