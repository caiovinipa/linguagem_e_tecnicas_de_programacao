#include <stdio.h>
#include <locale.h>
main(){
	float a, b, troca_a, troca_b;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	troca_a = b;
	troca_b = a;
	printf("O valor trocado de A e B é respectivamente: %.2f, %.2f", troca_a, troca_b );
	
}
