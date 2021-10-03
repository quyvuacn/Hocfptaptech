#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	if(a*b>=1000)
	printf("%d*%d lon hon 1000",a,b);
	else
	printf("%d*%d nho hon 1000",a,b);
	return 0;
}
