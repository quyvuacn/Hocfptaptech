#include <stdio.h>
#include <math.h>

int main() {

    float daihcn,ronghcn;
	printf("Nhap chieu dai cua hinh chu nhat ");
	scanf("%f", &daihcn);
	printf("Nhap chieu rong cua hinh chu nhat ");
	scanf("%f", &ronghcn);
	printf("Chu vi hinh chu nhat la : %.2f \n ",2*(daihcn+ronghcn));
	printf("Dien tich hinh chu nhat la : %.2f \n",daihcn*ronghcn);
	
   float canhvuong;
   	printf("Nhap canh cua hinh vuong ");
	scanf("%f", &canhvuong);
	printf("Chu vi hinh vuong la : %.2f \n",4*canhvuong);
	printf("Dien tich hinh vuong la : %.2f \n",canhvuong*canhvuong);
	
	float bankinh;
   	printf("Nhap ban kinh cua hinh tron ");
	scanf("%f", &bankinh);
	printf("Chu vi hinh tron la : %.2f \n",2*3.14*bankinh);
	printf("Dien tich hinh tron la : %.2f \n ",3.14*bankinh*bankinh);
   


	return 0;
}
