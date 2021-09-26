#include <stdio.h>
#include <math.h>

int main() {

    float r,chuvi,dientich;
	printf("Nhap ban kinh r:");
	scanf("%f", &r);
	chuvi = 2*M_PI*r; //Pi con dc tinh bang atan(1)*4 hoac 2*
	dientich = M_PI*r*r;
	printf("Chu vi hinh tron la: %f\n", chuvi);
	printf("Dien tich hinh tron la: %f\n", dientich);
	return 0;
}
