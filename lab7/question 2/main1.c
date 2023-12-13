#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,temp;
	
	scanf("%d",&A);
	scanf("%d",&B);
	
	temp=A;
	A=B;
	B=temp;
    
    printf("A:%d",A);
    printf("B:%d",B);
	
	return 0;
}
