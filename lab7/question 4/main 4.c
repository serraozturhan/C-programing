#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int radius,operationtype,pi=3.14;
	float perimeter,area;
	
	printf("radius:");
	scanf("%d",&radius);
	
	printf("operationtype:");
	scanf("%d",&operationtype);
	
	  if(operationtype==1){
	    perimeter=2*pi*radius;
	    printf("perimeter %f",perimeter);
	   } 
	  else if(operationtype==2){
	    area=pi*radius*radius;
	    printf("area %f",area);
	   }
	  else{
	  	printf("wrong input");
	  }	  
	return 0;
}
