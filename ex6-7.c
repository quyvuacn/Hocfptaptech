#include <stdio.h>   
#include <stdlib.h> 
int main(){
    int yearsWithUs,bizDone;
    scanf("%d%d", &yearsWithUs,&bizDone);
    if (yearsWithUs>=10 & bizDone>=5000000)
      printf("Classified as an MVS");
    else 
     printf("A little more effort required");
    return 0;
}
