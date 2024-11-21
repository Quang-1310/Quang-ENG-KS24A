#include<stdio.h>
int main(){
	float diemtoan, diemvan, diemanh, tongdiem, diemtb;
	printf("moi ban nhap vao diem toan ");
	scanf("%f", &diemtoan);
	
	printf("moi ban nhap vao diem van ");
	scanf("%f", &diemvan);
	
	printf("moi ban nhap vao diem anh ");
	scanf("%f", &diemanh);
	
	tongdiem = diemtoan + diemvan + diemanh;
	diemtb = tongdiem/3;
	
	printf("tong diem cua ban la %.2f\n", tongdiem);
	printf("diem trung binh cua ban la %.2f\n", diemtb);
	return 0;
}