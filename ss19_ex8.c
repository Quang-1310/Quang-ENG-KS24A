#include<stdio.h>
#include<string.h>
struct sinhVien{
	int id;
	char name[50];
	int age;
	long long phoneNumber;
};
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
	arr(a,n);
	return 0;
}
void arr(SV a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int index1;
			int index2;
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
			if(strcmp(&a[i].name[index1 + 1],&a[j].name[index2 + 1]) > 0){
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