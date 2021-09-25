#include <stdio.h>   
#include <stdlib.h> 
int main(){
    int exp,salary;
    char grade;
    scanf("%c",&grade);
    scanf("%d",&exp);
    
    if(grade=='E'){
    	if(exp==2)
      	  salary=2000;
      	else
      	  if(exp==3)
      	    salary=3000;
	  }
    else {
    	if (grade=='M'){
    	  if(exp==2)
      	    salary=3000;
      	  else
      	    if(exp==3)
      	      salary=4000;
	  }
    		
   	}
    printf("%d",salary);
    return 0;	 
	}
	

	


