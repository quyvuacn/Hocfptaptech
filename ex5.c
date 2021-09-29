#include <stdio.h>
#include <math.h>

int main() {

    float top,hight,bottom;
	printf("Nhap chieu cao cua hinh thang ");
	scanf("%f", &hight);
	printf("Nhap day tren cua hinh thang ");
	scanf("%f", &top);
	printf("Nhap day duoi cua hinh thang ");
	scanf("%f", &bottom);
	printf("Dien tich hinh hinh thang la: %f\n", hight*(bottom+top)/2);
	return 0;
}
