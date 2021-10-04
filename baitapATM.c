#include <stdio.h>

int main(){
	int username,password;
	int sodu=5000;
	int id;
	
    printf("Dang nhap: \n");
    printf("Ten dang nhap: ");
 	scanf("%d",&username);
 	printf("Mat khau dang nhap: ");
 	scanf("%d",&password);
 	
 	// username: 1234
 	//mat khau :1234
 	
 	if(username==1234 && password==1234){
 	  printf("Dang nhap thanh cong. Vui long chon 1 trong cac dich vu sau\n");
 	  printf("1.Xem so du\n");
 	  printf("2.Rut tien\n");
 	  printf("3.Chuyen khoan\n");
 	  printf("4.Thanh toan dich vu khac\n");
 	  scanf("%d",&id);  
    }
 	else
 	  printf("Ten dang nhap hoac mat khau sai! Vui long kiem tra lai");
	
 	switch(id){	
		case 1: 
			printf("So du cua quy khach la %d",sodu);
		   	break;
		   
		case 2: 
			printf("Vui long nhap so tien muon rut");
	   		break;
	   
		case 3: 
			printf("Vui long chon ten ngan hang muon chuyen");
	   		break;
	   	case 4: 
			printf("Vui long chon loai dich vu");
	   		break;
	   	
	   	default: 
		   printf("Yeu cau chon dung");
	   	   break;		
}

	
}
