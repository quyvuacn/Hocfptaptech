#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b;
	printf("nhap so thu nhat %d");
	scanf("%d",&a);
	printf("nhap so thu hai %d");
	scanf("%d",&b);
	if(a%b==0)
	printf("%d chia het cho %d",a,b);
	else
	printf("%d khong chia het cho %d",a,b);
	return 0;
}
