#include <stdio.h>
#include <math.h>

int main() {

    float hight,bottom;
	printf("Nhap chieu cao cua tam giac ");
	scanf("%f", &hight);
	printf("Nhap canh day cua tam giac ");
	scanf("%f", &bottom);
	printf("Dien tich hinh tam giac la: %f\n", hight*bottom/2);
	return 0;
}
