#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float quantidade;
	
	printf("Digite a quantidade de maçãs compradas: ");
	scanf("%f", &quantidade);
	
	if (quantidade < 12 ){
		float maca = 1.30;
		float valor = maca * quantidade;
		printf("O custo total da compra de maçãs é: R$%.2f", valor);
	}else{
		float maca = 1.00;
		float valor = maca * quantidade;
		printf("O custo total da compra de maçãs é: R$%.2f", valor);
	}
}
