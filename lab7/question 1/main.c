#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number1,number2;
	
	printf("number1:");
	scanf("%d",&number1);
	
	printf("number2:");
	scanf("%d",&number2);
	
	int sum=(number1+number2);
	
	printf("sum=%d",sum);
	return 0;
}
