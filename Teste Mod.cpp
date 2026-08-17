#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 10;
	
	if (numero % 2 == 0) {
		printf("O número %i é par.", numero);
	} else{
		printf("O número %i é ímpar.", numero);
	}
}
