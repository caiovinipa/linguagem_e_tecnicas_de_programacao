#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	if(valor1 > valor2 ){
		float totalA = valor1 - valor2;
		printf("A diferença desses números será: %.1f", totalA);
	}else{
		float totalB = valor2 - valor1;
		printf("\nA diferença desses números será: %.1f", totalB);
	}
}
