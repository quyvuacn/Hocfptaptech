#include <stdio.h>
#include <stdlib.h>

int main(){
	int username,password;
	int sodu=5000;
	int id,rut;
	int password_old=1234;
	
    printf("Chao mung ban den cay rut tien tu dong cua MB bank: \n");
    
    while(id==0){
    	    
	    printf("Ten dang nhap: ");
	 	scanf("%d",&username);
	 	printf("Mat khau dang nhap: ");
	 	scanf("%d",&password);
	 	
	 	// username: 1234
	 	//mat khau :1234
	 	
	 	if(username==1234 && password==password_old){
	 	  printf("Dang nhap thanh cong. Vui long chon 1 trong cac dich vu sau\n");
	 	  printf("1.Xem so du\n");
	 	  printf("2.Rut tien\n");
	 	  printf("3.Chuyen khoan\n");
	 	  printf("4.Thanh toan dich vu khac\n");
	 	  printf("5.Doi mat khau\n");
	 	  scanf("%d",&id);  
	    }
	 	else{
	 		system("cls");
	 		printf("Ten dang nhap hoac mat khau sai! Vui long kiem tra lai \n");
		 }
	 	  
    }

	
 	switch(id){	
		case 1: 
			printf("So du cua quy khach la %d",sodu);
		   	break;
		   
		case 2: 
			printf("Vui long nhap so tien muon rut. Luu y so tien rut phai la boi cua 5 \n");
			printf("Nhap so tien: ");
			scanf("%d",&rut);
			if(rut%5==0){
				sodu-=5;
				printf("Rut tien thanh cong so du cua ban con %d",sodu);
			}	
	   		break;
	   
		case 3: 
			printf("Vui long chon ten ngan hang muon chuyen");
	   		break;
	   	case 4: 
			printf("Vui long chon loai dich vu");
	   		break;
	   	case 5: 
			printf("Vui long nhap mat khau cu ");
			scanf("%d",&password);
			if(password==password_old){
				printf("Nhap mat khau moi ");
				scanf("%d",&password_old);
				printf("Thay doi mat khau thanh cong");			
			}
			else
				printf("Sai mat khau");				
	   		break;
	   	
	   	default: 
		   printf("Yeu cau chon dung");
	   	   break;		
}

	
}
