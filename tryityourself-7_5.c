#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int diem;
	printf("moi ban nhap diem :");
	scanf("%d",&diem);
	if (diem>75){
	printf("dat diem A");
	}
	else if (diem>60){
	printf("dat diem B");
	}
	else if (diem>45){
	printf("dat diem C");
	}
	else if (diem>35){
	printf("dat diem D");
	}
	else
	printf("dat diem E");
	
		
	return 0;
}
