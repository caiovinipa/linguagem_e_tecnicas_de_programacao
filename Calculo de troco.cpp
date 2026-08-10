#include <stdio.h>

main(){
	float valor, quantidade, valor_pago, troco, total;
	printf("Digite o valor do produto: ");
	scanf("%f" , &valor);
	printf("\nDigite a quantidade: ");
	scanf("%f", &quantidade);
	printf("\nValor pago: ");
	scanf("%f", &valor_pago);
	total = quantidade * valor;
	troco = valor_pago - total;
	printf("O troco sera: R$ %.2f", troco);
	
	
	
}
