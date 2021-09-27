#include <stdio.h>
#include <math.h>

int main() {

    float hight,r;
	printf("Nhap chieu cao cua hinh tru ");
	scanf("%f", &hight);
	printf("Nhap ban kinh day cua hinh tru ");
	scanf("%f", &r);
	printf("The tich hinh tru la: %f\n",4*atan(1)*r*r*hight);  // 4*atan(1)=M_PI
	return 0;
}
