#include <stdio.h>   
#include <stdlib.h> 
 
int main() {

 int num,i,id,sum=0;
 printf("Chao mung ban den voi quan coffee Tran Duc Bo/n");
 printf("Ban den bao nhieu nguoi? \n");
 printf("Nhap so nguoi: \n");
 scanf("%d",&num);
 int user[num],menu[5];
 
 for(i=0;i<5;i++){
 	menu[i]=0;
 }
 
 printf("Menu\n");
  printf("1.Tra da 5k/coc \n");
  printf("2.Nuoc mia 10k/coc \n");
  printf("3.Nuoc loc 5k/coc \n");
  printf("4.Ca phe phan chon 30k/coc \n");
  printf("5.Huong duong 5k/dia \n\n\n");
 
 for(i=0;i<num;i++){
 	printf("Quy khach thu %d muon chon gi? \n",i+1);
 	scanf("%d",&id);
 	switch(id){
 		case 1: 
 			printf("Mon cua khach chon la Tra da gia 5k.\n\n");
 			menu[0]++;
 			user[i]=id;
 			sum+=5000;
 			break;
 		case 2: 
 			printf("Mon cua khach chon la Nuoc mia gia 10k.\n\n");
 			sum+=10000;
 			user[i]=id;
 			menu[1]++;
 			break;
 		case 3: 
 			printf("Mon cua khach chon la Nuoc loc gia 5k.\n\n");
 			sum+=5000;
 			user[i]=id;
 			menu[2]++;
 			break;
 		case 4: 
 			printf("Mon cua khach chon la Ca phe gia 30k.\n\n");
 			sum+=30000;
 			user[i]=id;
 			menu[3]++;
 			break;
 		case 5: 
 			printf("Mon cua khach chon la Huong duong gia 5k.\n\n");
 			sum+=5000;
 			user[i]=id;
 			menu[4]++;
 			break;
 		default: 
 			printf("Quy khach chon mon sai\n");
 			break;
	 }
 }
 printf("\n\n\n\n");
 printf("Hoa don cua cac quy khach la \n");
 
  for(i=0;i<num;i++){
 	printf("Quy khach thu %d dung mon co ma %d \n",i+1,user[i]);
  } 
   
  printf("1.Tra da %d coc \n",menu[0]);
  printf("2.Nuoc mia %d coc \n",menu[1]);
  printf("3.Nuoc loc %d coc \n",menu[2]);
  printf("4.Ca phe phan chon %d coc \n",menu[3]);
  printf("5.Huong duong %d dia \n",menu[4]);
  printf("Tong %d \n",sum);
  printf("Thue 10 %% la %f\n",sum*0.1);
  printf("Tien phai thanh toan %.0f",sum*1.1);
}

