#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int num;
	printf("Nhap gia tri cho mang ");
	scanf("%d",&num);
   int mang[num],i,x;
   for(i=0;i<num;i++){
   	printf("Nhap gia tri thu %d cua mang \n",i+1);
   	scanf("%d",&mang[i]);
   }
   
   for(i=0;i<num/2;i++){
   	  x=mang[i];
   	  mang[i]=mang[num-1-i];
   	  mang[num-1-i]=x;
   }
   
   printf("\n\n\n\n");
   
    for(i=0;i<num;i++){
   	printf("%d \n",mang[i]);
   }
}
