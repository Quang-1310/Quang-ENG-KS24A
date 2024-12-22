#include<stdio.h>
#include<string.h>

struct sinhVien{
	int id;
	char name[50];
	int age;
	long long phoneNumber;
};
void dele();
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
	int n = 5;
	int idDele;
	printf("Moi ban nhap id cua sinh vien muon xoa: ");
	scanf("%d", &idDele);
	dele(a, idDele, &n);
	output(a, n);
	return 0;
}
void dele(SV a[], int idDele, int *n){
	int flag = -1;
	for(int i = 0; i < *n; i++){
		if(idDele == a[i].id){
			flag = 1;
			for(int j = i; j < *n; j++){
				a[j] = a[j + 1];
			}
			(*n)--;		
		}
	}
	if(flag == -1){
		printf("Danh sach khong co sinh vien co id: %d\n", idDele);
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