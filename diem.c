#include <stdio.h>

int sum(int as, int lythuyet, int thuchanh);
int xeploai(int sum);

int main(){
	int as,lythuyet,thuchanh,i;
	char s;
	printf("Danh gia hoc luc sinh vien lop T2109M\n");
	
	while(s!='n'){
		printf("Nhap diem chuyen can \n");
		scanf("%d",&as);
		printf("Nhap diem ly thuyet \n");
		scanf("%d",&lythuyet);
		printf("Nhap diem thuc hanh \n");
		scanf("%d",&thuchanh);
		printf("Diem trung binh cua thi sinh la %f\n",(float)sum(as,lythuyet,thuchanh)/3);
		printf("Xep loai hoc luc %d\n",xeploai(sum(as,lythuyet,thuchanh)));
		printf("Ban co muon tiep tuc khong ?\n");
		fflush(stdin);
		scanf("%c",&s);
		if(s=='n')break;
		;	
	}
	
}

int sum(int as,int lythuyet, int thuchanh){
	return as+lythuyet+thuchanh;
}

int xeploai(int sum){
	float avg = (float)sum/3;
	if(avg>=80)
		return 3;
	else if (avg>=60)
		return 2;
	else if(avg>=40)
		return 1;
	else 
		return 0;
}

