#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char c[1000];
	FILE *fptr;
	fptr = fopen("D:\\ss21.c\\bt05.txt","w");
	printf("Moi ban nhap vao so dong can co trong file: ");
	scanf("%d", &n);
	fflush(stdin);
	for(int i = 0; i < n; i++){
		printf("Moi ban nhap thong tin dong thu %d: ", i + 1);
		fgets(c, 1000, stdin);
		int len =strlen(c);
		if(c[len - 1] == '\n'){
			c[len - 1] = '\0';
		}
		fprintf(fptr,"%s\n",c );
	}
	fclose(fptr);
	fptr = fopen("D:\\ss21.c\\bt05.txt","r");
	for(int i = 0; i < n; i++){
		if (fgets(c, sizeof(c), fptr) != NULL) {
            printf("Noi dung dong thu %d la: %s", i + 1, c);
        }
	}
	fclose(fptr);
	return 0;
}