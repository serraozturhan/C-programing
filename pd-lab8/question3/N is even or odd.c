#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	
	printf("N:");
	scanf("%d",&N);
	
		if(N%2==0){
		
			printf("%d is a even number.\n", N);
		}else{
			printf("%d is a odd number.\n",N);
		}
	return 0;
}
