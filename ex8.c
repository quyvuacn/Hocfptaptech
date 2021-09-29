#include <stdio.h> 
#include <stdbool.h> 
  
main(){
  int num1;
  float num2;
  char char1;
  long int num3;
  long double num4;
  
  printf("Kieu int : %d byte \n",sizeof(int));
  printf("Vi du 1 so kieu int  ");
  scanf("%d",&num1);
  
  printf("Kieu float : %d byte \n",sizeof(float));
  printf("Vi du 1 so kieu float  ");
  scanf("%f",&num2);
  
  printf("Kieu char : %d byte \n",sizeof(char));
  printf("Vi du 1 ki tu kieu char \n");
  scanf("%c",&char1);
  
  printf("Kieu long int : %d byte \n",sizeof(long int));
  printf("Kieu long double : %d byte \n",sizeof(long double));
  
  
  
}
