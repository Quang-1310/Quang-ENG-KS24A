#include<stdio.h>
#include<string.h>

struct sinhVien{
	int id;
	char name[50];
	int age;
	long long phoneNumber;
};
void fix();
void output();
typedef struct sinhVien SV;
int main(){
	SV a[50] = {
		{1, "Nguyen Van A", 18, 123},
		{2, "Nguyen Van B", 19, 234},
		{3, "Nguyen Van C", 20, 345},
		{4, "Nguyen Van D", 21, 456},
		{5, "Nguyen Van E", 22, 567},		
	};
	int id;
	printf("Moi ban nhap id sinh vien can sua thong tin: ");
	scanf("%d", &id);
	fix(id, a, 5);
	output(a, 5);
	return 0;
}
void fix(int id, SV a[], int n){
	int flag = -1;
	for(int i = 0; i < n; i++){	
		if(a[i].id == id){
			flag = 1;
			printf("Thong tin cua sinh vien co id %d la: \n", id );
			printf("Ho va ten: %s\n", a[i].name);
			printf("Tuoi: %d\n", a[i].age);
			printf("SDT: %lld\n",a[i].phoneNumber);			
			printf("Moi ban nhap thong tin moi cho sinh vien \n");
			printf("Moi ban nhap ten: ");
			fflush(stdin);			
			fgets(a[i].name,50,stdin);
			int len = strlen(a[i].name);   
            if (a[i].name[len - 1] == '\n') {  
                a[i].name[len - 1] = '\0';  
            } 
			printf("Moi ban nhap tuoi: ");
			scanf("%d", &a[i].age);
		}
	}
	if(flag == -1){
		printf("Khong co sinh vien nao co id:%d\n", id);
	}	 
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
