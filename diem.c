#include <stdio.h>

int xeploai(int as, int lythuyet, int thuchanh);

int main(){
	int as,lythuyet,thuchanh,i,xl;
	char s;
	printf("Danh gia hoc luc sinh vien lop T2109M\n");
	
	do {	printf("Nhap diem chuyen can \n");
		scanf("%d",&as);
		printf("Nhap diem ly thuyet \n");
		scanf("%d",&lythuyet);
		printf("Nhap diem thuc hanh \n");
		scanf("%d",&thuchanh);
	        xl=xeploai(as,lythuyet,thuchanh);
		switch(xl){
			case 3: 
				printf("Xep loai Gioi\n");
				break;
			case 2: 
				printf("Xep loai Kha\n");
				break;
			case 1: 
				printf("Xep loai Do\n");
				break;
			case 0: 
				printf("Xep loai Truot\n");
				break;			
		}
		
		printf("Ban co muon tiep tuc khong ?\n");
		fflush(stdin);
		scanf("%c",&s);
	}while(s!='n');
	
}


int xeploai(int as,int lythuyet, int thuchanh){
	float avg = ((float)as+ (float)lythuyet + (float)thuchanh)/3;
	if(avg>=80)
		return 3;
	else if (avg>=60)
		return 2;
	else if(avg>=40)
		return 1;
	else 
		return 0;
}

