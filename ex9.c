#include <stdio.h>   
#include <stdlib.h> 
int main(){
    int exp,salary;
    char grade;
    scanf("%c",&grade);
    scanf("%d",&exp);
    
    if(grade=='E' & exp==2){
      	salary=2000;
	  }
    else {
    	if (grade=='E' & exp==3){
    		 salary=3000;
		}
    	 
	}
	
	 if (grade=='M' & exp==2){
	 	 salary=3000;
	 }
     
    else {
    	if (grade=='M' & exp==3){
    		salary=4000;
		}  	  
	}
	
	
	printf("%d",salary);
    return 0;
}
