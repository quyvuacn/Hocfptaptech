#include <stdio.h>
#include <math.h>

int main() {

    float num;
    printf("Nhap mot so ");
	scanf("%f", &num);
	if (num>0)
	  printf("So duong");
	else if(num<0)
	  printf("So am");
	else
	  printf("So 0");
	return 0;
}
