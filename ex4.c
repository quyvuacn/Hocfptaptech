#include <stdio.h>   
#include <stdlib.h> 
int main(){
    float c;
    printf("Nhap do C ");
    scanf("%f", &c);
    printf("%.2f do C doi ra %.2f do F ",c,c*9/5+32);
    return 0;
}
