#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("nhap so thu nhat :");
	scanf("%d",&a);
	printf("nhap so thu hai :");
	scanf("%d",&b);
	printf("nhap so can so sanh :");
	scanf("%d",&c);
	if(a-b==c)
	printf("gia tri chenh lech bang so duoc nhap ");
	else
	printf("gia tri chenh lech khong bang so duoc nhap");
	return 0;
}
