#include<stdio.h>
int main(){
	float chisocu, chisomoi, sodien;
	float tiendien ;
	printf("moi ban nhap vao chi co cu ");
	scanf("%f",&chisocu);
	printf("moi ban nhap vao chi co moi ");
	scanf("%f",&chisomoi);
	sodien = chisomoi - chisocu;
	if(0 <= sodien && sodien < 50){
		tiendien = sodien * 10.000;
		printf("so tien dien phai dong la %.3f VND", tiendien);
	}
	else if(50 <= sodien && sodien < 100){
		tiendien = sodien * 15.000;
		printf("so tien dien phai dong la %.3f VND", tiendien);
	}
	else if(100 <= sodien && sodien < 150){
		tiendien = sodien * 20.000;
		printf("so tien dien phai dong la %.3f VND", tiendien);
	}
	else if(150 <= sodien && sodien < 200){
		tiendien = sodien * 25.000;
		printf("so tien dien phai dong la %.3f VND", tiendien);
	}
	else{
		printf("so tien dien phai dong la %.3f VND", tiendien);
	}
	return 0;
}