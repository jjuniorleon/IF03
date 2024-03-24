#include <stdio.h>
#include <math.h>

int main () {
	float n1;
	
	printf("escolha um numero: ");
	scanf("%f", &n1);
	
	if(n1 > 0) {
		printf("a raiz quadrada desse numero e: %.2f", (sqrt(n1)));
	}else{
		printf("o quadrado desse numero e: %.2f", pow(n1, 2));
	}	
}
