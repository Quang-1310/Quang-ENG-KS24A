#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
};
typedef struct sinhVien sv;
int main() {
    sv a[100];  
    FILE *fptr;
    int n = 2;
    fptr = fopen("D:\\ss21.c\\students.txt", "r");
    printf("Danh sach sinh vien:\n");
	for(int i = 0; i < n; i++){
		fgets(a[i].name, 100, fptr);
		printf("%s\n",a[i].name);
	}

    fclose(fptr);
    return 0;
}