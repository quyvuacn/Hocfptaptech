#include <stdio.h>   
#include <math.h>
int main(){
    float toan,van,anh;
    printf("Nhap diem toan :\n");
    scanf("%f", &toan);
     printf("Nhap diem van :\n");
    scanf("%f", &van);
     printf("Nhap diem anh :\n");
    scanf("%f", &anh);
    printf("Tong diem 3 mon la %f\n",toan+van+anh);
    printf("Trung binh 3 mon la %f\n",(toan+van+anh)/3 );
    return 0;
}


