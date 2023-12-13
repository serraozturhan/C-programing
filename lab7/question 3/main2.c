#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int stdnumber;
	float midterm,final,last;
	
	printf("stdnumber:");
	scanf("%d",&stdnumber);
	
	printf("midterm:");
	scanf("%f",&midterm);
	
	printf("final:");
	scanf("%f",&final);
	
	last=midterm*0.4+final*0.6;
	
	printf("stdnumber=%d,last=%f",stdnumber,last);
	return 0;
}
