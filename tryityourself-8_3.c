#include <stdio.h>   

int main(){
   int a,b,c,max; 
   
   printf("Nhap so a: ");
   scanf("%d",&a);
   
   printf("Nhap so b: ");
   scanf("%d",&b);
   
   printf("Nhap so c: ");
   scanf("%d",&c);
   
   max=a;
     
   if(b>max)
     max=b;
   if(c>max)
     max=c;  
    printf("So lon nhat trong 3 so %d,%d,%d là %d",a,b,c,max);

}
