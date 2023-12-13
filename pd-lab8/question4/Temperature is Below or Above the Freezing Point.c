#include <stdio.h>
#include <stdlib.h>

//verilen sicaklik degerinin donma noktasindan büyük olup olmadigini kontrol eden program
int main() {
	
	int temperature;
	
		printf("temperature:");
		scanf("%d",&temperature);
	
		if(temperature>0){
			printf("Temperature above the freezing point");
		}else{
			printf(" Temperature below the frezzing point");
		}
	return 0;
}
