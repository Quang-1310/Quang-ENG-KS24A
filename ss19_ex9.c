#include<stdio.h>
#include<string.h>
struct sinhVien{
	int id;
	char name[50];
	int age;
	long long phoneNumber;
};
void output();
void add(); 
void fix();
void dele();
void ls();
void arr();
typedef struct sinhVien SV;
int main(){
	int chose;
	SV a[50] = {
		{1, "Nguyen Van Tien Dat", 18, 123},
		{2, "Nguyen Van Sau", 19, 234},
		{3, "Nguyen Van Anh", 20, 345},
		{4, "Nguyen Van Hung", 21, 456},
		{5, "Nguyen Van Tien", 22, 567},		
	};
	int n = 5;
	do{
		printf("1.Hien thi danh sach sinh vien\n");
		printf("2.Them sinh vien vao vi tri chi dinh\n");
		printf("3.Sua thong tin sinh vien o vi tri chi dinh\n");
		printf("4.Xoa sinh vien o vi tri chi dinh\n");
		printf("5.Tim kiem sinh vien\n");
		printf("6.Sap xep danh sach sinh vien\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chose);
		if(chose == 1){
			printf("DANH SACH SINH VIEN\n");			
			output(a,n);
		}
		printf("\n");
		if(chose == 2){
			add(a,&n);
		}
		printf("\n");
		if(chose == 3){
			fix(&a,n);
		}
		printf("\n");
		if(chose == 4){
			dele(a, &n);
		}
		printf("\n");
		if(chose == 5){	
			fflush(stdin);		
			ls(a, n);
		}			
		printf("\n");
		if(chose == 6){
			arr(a,n);	
		}
		printf("\n");
	}while(chose != 7);
	return 0;
}
void output(SV a[], int n){
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
}
void add(SV a[], int *n){
	int index;
	printf("Moi ban nhap vao vi tri can them sinh vien: ");
	scanf("%d", &index);
	fflush(stdin);	
	for(int i = *n; i > index - 1; i--){
		a[i] = a[i - 1];
	}
	printf("Moi ban nhap ten sinh vien: ");
	fgets(a[index - 1].name,50,stdin);
	int len = strlen(a[index - 1].name);
	if(a[index - 1].name[len - 1] == '\n'){
		a[index - 1].name[len - 1] = '\0';
	}
	printf("Moi ban nhap tuoi: ");
	scanf("%d", &a[index - 1].age);
	printf("Moi ban nhap SDT: ");
	scanf("%lld", &a[index - 1].phoneNumber);
	(*n)++;
	for(int i = 0; i < *n; i++){
		a[i].id = i + 1;
	}
	for(int i = 0; i < *n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
	
	
}
void fix(SV *a, int n){
	printf("Moi ban nhap vao vi tri can sua: ");
	int index;
	scanf("%d", &index);
	fflush(stdin);
	printf("Moi ban nhap ten sinh vien moi: ");
	fgets(a[index - 1].name, 50, stdin);
	int len = strlen(a[index - 1].name);
	if (a[index - 1].name[len - 1] == '\n'){
        a[index - 1].name[len - 1] = '\0';
    }	
	printf("Moi ban nhap tuoi sinh vien moi: ");
	scanf("%d", &a[index - 1].age);
	printf("Moi ban nhap SDT sinh vien moi: ");
	scanf("%lld", &a[index - 1].phoneNumber);
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
}
void dele(SV a[], int *n){
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
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
}

void ls(SV a[],int n){
	char studentName[50];	
	printf("Moi ban nhap ten sinh vien can tim: ");
	fgets(studentName, 50, stdin);
	int len = strlen(studentName);
    if (studentName[len - 1] == '\n') {
        studentName[len - 1] = '\0';
    }
	int flag = -1;
	for(int i = 0; i < n; i++){
		if(strcmp(studentName,a[i].name) == 0){
			flag = 1;
			printf("Sinh vien ban tim la: \n");
			printf("ID:%d\n", a[i].id);
			printf("Ho va ten: %s\n", a[i].name);
			printf("Tuoi: %d\n", a[i].age);
			printf("SDT: %lld\n",a[i].phoneNumber);
			printf("\n");
		}
	}
	if(flag == -1){
		printf("Khong co sinh vien trong danh sach");
	}
}
void arr(SV a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int index1 = 0;
			int index2 = 0;
			for(int k = 0; k < sizeof(a[i].name); k++){
				if(a[i].name[k] == ' '){
					index1 = k;
				}
			}
			for(int k = 0; k < sizeof(a[j].name); k++){
				if(a[j].name[k] == ' '){
					index2 = k;
				}
			}
			if(strcmp(&a[i].name[index1 + 1], &a[j].name[index2 + 1]) > 0){
				SV temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}			
		}
	}
	for(int i = 0; i < n; i++){
		printf("ID:%d\n", a[i].id);
		printf("Ho va ten: %s\n", a[i].name);
		printf("Tuoi: %d\n", a[i].age);
		printf("SDT: %lld\n",a[i].phoneNumber);
		printf("\n");
	}
}