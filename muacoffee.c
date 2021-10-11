#include <stdio.h>   
#include <stdlib.h> 
 
int main() {

 int songuoi,i,id,sum=0;
 printf("Chao mung ban den voi quan coffee Tran Duc Bo/n");
 printf("Ban den bao nhieu nguoi? \n");
 printf("Nhap so nguoi: \n");
 scanf("%d",&songuoi);
 int nguoi[songuoi],sl[songuoi];
 
 for(i=0;i<songuoi;i++){
 	sl[i]=0;
 }
 
 printf("Menu\n");
  printf("1.Tra da 5k/coc \n");
  printf("2.Nuoc mia 10k/coc \n");
  printf("3.Nuoc loc 5k/coc \n");
  printf("4.Ca phe phan chon 30k/coc \n");
  printf("5.Huong duong 5k/dia \n\n\n");
 
 for(i=0;i<songuoi;i++){
 	printf("Quy khach thu %d muon chon gi? \n",i+1);
 	scanf("%d",&id);
 	switch(id){
 		case 1: 
 			printf("Mon cua khach chon la Tra da gia 5k.\n\n");
 			sl[0]++;
 			sum+=5000;
 			break;
 		case 2: 
 			printf("Mon cua khach chon la Nuoc mia gia 10k.\n\n");
 			sum+=10000;
 			sl[1]++;
 			break;
 		case 3: 
 			printf("Mon cua khach chon la Nuoc loc gia 5k.\n\n");
 			sum+=5000;
 			sl[2]++;
 			break;
 		case 4: 
 			printf("Mon cua khach chon la Ca phe gia 30k.\n\n");
 			sum+=30000;
 			sl[3]++;
 			break;
 		case 5: 
 			printf("Mon cua khach chon la Huong duong gia 5k.\n\n");
 			sum+=5000;
 			sl[4]++;
 			break;
 		default: 
 			printf("Quy khach chon mon sai\n");
 			break;
	 }
 }
 printf("\n\n\n\n");
 printf("Hoa don cua cac quy khach la \n");
  printf("1.Tra da %d coc \n",sl[0]);
  printf("2.Nuoc mia %d coc \n",sl[1]);
  printf("3.Nuoc loc %d coc \n",sl[2]);
  printf("4.Ca phe phan chon %d coc \n",sl[3]);
  printf("5.Huong duong %d dia \n",sl[4]);
  printf("Tong %d \n",sum);
  printf("Thue 10% \n");
  printf("Tien phai thanh toan %.0f",sum*1.1);
 

}

