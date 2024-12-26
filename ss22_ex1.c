#include<stdio.h>
#include<string.h>
struct SinhVien{
	char id[50];
	char name[50];
	int age;
};
struct SinhVien sv[100];
int numberStudent = 0;
void loadFileSinhVien();
void printStudent();
void addStudent();
void saveStudent();
void editStudent();
void deleteStudent();
void searchStudent();
void sortStudent();
int main(){
	loadFileSinhVien();
	int chose;
	do{
		printf("MENU\n");
		printf("1.In danh sach sinh vien\n");
		printf("2.Them sinh vien\n");
		printf("3.Sua thong tin sinh vien\n");
		printf("4.Xoa sinh vien\n");
		printf("5.Tim kiem sinh vien\n");
		printf("6.Sap xep danh sach sinh vien\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){
			printStudent();
		}
		printf("\n");
		if(chose == 2){
			addStudent();
		}
		printf("\n");
		if(chose == 3){
			editStudent();
		}
		printf("\n");
		if(chose == 4){
			deleteStudent();
		}
		printf("\n");
		if(chose == 5){
			searchStudent();
		}
		printf("\n");
		if(chose == 6){
			sortStudent();
		}
		printf("\n");
	}while(chose != 7);
	return 0;
}
void loadFileSinhVien(){
	FILE *file;
	file = fopen("student.bin","rb");
	if(file == NULL){
		printf("Khong mo duoc file\n");
		return;
	}
	// lay du lieu o trong file ra
	numberStudent = fread(&sv,sizeof(struct SinhVien),100,file);
	fclose(file);
}

void printStudent(){
	if(numberStudent == 0){
		printf("Danh sach sinh vien trong.");
		return;
	}
	for(int i = 0; i < numberStudent; i++){
		printf("Thong tin sinh vien thu %d\n", i + 1);
		printf("ID: %s\n", sv[i].id);
		printf("Ten sinh vien: %s\n",sv[i].name);
		printf("Tuoi: %d\n",sv[i].age);	
	}	
}

void addStudent(){
	if(numberStudent >= 100){
		printf("Danh sach sinh vien da day\n");
		return;
	}
	struct SinhVien sv1;
	fflush(stdin);
	printf("Moi ban nhap thong tin sinh vien:\n");
	printf("Nhap ID: ");
	fgets(sv1.id,sizeof(sv1.id),stdin);
	sv1.id[strcspn(sv1.id,"\n")] = '\0';
	fflush(stdin);
	printf("Nhap Ten: ");
	fgets(sv1.name,sizeof(sv1.name),stdin);
	sv1.name[strcspn(sv1.name,"\n")] = '\0';
	printf("Nhap Tuoi: ");
	scanf("%d", &sv1.age);
	fflush(stdin);
	sv[numberStudent++] = sv1;
	printf("Them sinh vien thanh cong\n");	
	saveStudent();
}

void saveStudent(){
	FILE *file;
	file = fopen("student.bin","wb");
	fwrite(sv,sizeof(struct SinhVien), numberStudent, file);
	fclose(file);
	
}

void editStudent(){
	fflush(stdin);
	char editId[50];
    printf("Nhap ID sinh vien can sua: ");
    fgets(editId, sizeof(editId), stdin);
    editId[strcspn(editId, "\n")] = '\0';
    for (int i = 0; i < numberStudent; i++) {
        if (strcmp(sv[i].id, editId) == 0) {
            printf("Nhap Ten moi: ");
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
            printf("Nhap Tuoi moi: ");
            scanf("%d", &sv[i].age);
            getchar();
            printf("Sua thong tin sinh vien thanh cong.\n");
            saveStudent();
            return;
        }
    }
    printf("Khong tim thay sinh vien voi ID da nhap.\n");
	
}

void deleteStudent(){
	fflush(stdin);
    char deleId[50];
    printf("Nhap ID sinh vien can xoa: ");
    fgets(deleId, sizeof(deleId), stdin);
    deleId[strcspn(deleId, "\n")] = '\0';
    for (int i = 0; i < numberStudent; i++) {
        if (strcmp(sv[i].id, deleId) == 0) {
            for (int j = i; j < numberStudent - 1; j++) {
                sv[j] = sv[j + 1];
            }
            numberStudent--;
            printf("Xoa sinh vien thanh cong.\n");
            saveStudent();
            return;
        }
    }
    printf("Khong tim thay sinh vien voi ID da nhap.\n");
}

void searchStudent(){
	fflush(stdin);
    char searchId[50];
    int flag = -1;
    printf("Nhap ID sinh vien can tim: ");
    fgets(searchId, sizeof(searchId), stdin);
    searchId[strcspn(searchId, "\n")] = '\0';
    for (int i = 0; i < numberStudent; i++) {
        if (strcmp(sv[i].id, searchId) == 0){
        	flag = 1;
            printf("ID: %s, Ten: %s, Tuoi: %d\n", sv[i].id, sv[i].name, sv[i].age);
        }
    }
    if(flag == -1){
    	printf("Khong co sinh vien nao co ID: %s", searchId);
	}
}

void sortStudent(){
	fflush(stdin);
    for (int i = 0; i < numberStudent - 1; i++) {
        for (int j = i + 1; j < numberStudent; j++) {
            if (strcmp(sv[i].name, sv[j].name) > 0) {
                struct SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    printf("Sap xep danh sach sinh vien thanh cong.\n");
    saveStudent();
}




