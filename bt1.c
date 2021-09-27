   
#include <stdio.h>   
#include <stdlib.h> 
int main(){
    float dola,dong,tigia;
    printf("Nhap so dola can quy doi");
    scanf("%f", &dola);
    printf("Nhap ti gia quy doi");
    scanf("%f", &tigia);
    dong=tigia*dola;
    printf(" %.2f do bang %2.f dong\n",dola,dong);
    return 0;
}
