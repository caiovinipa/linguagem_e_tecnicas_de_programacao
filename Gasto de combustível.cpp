#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tipo;
	float capacidade, valor, gasolina = 6.50, alcool = 4.50;
		printf("Digite a capacidade máxima do carro em litros: ");
		scanf("%f", &capacidade);
		printf("Ele utiliza qual tipo de combustível?\nDigite 1 para gasolina e 2 para álcool: ");
		scanf("%d", &tipo);
	if (tipo == 1 ){
	valor = gasolina * capacidade; 
		printf("Com %.2fL, gastaria R$%.2f", capacidade, valor);
	}else{
	valor = alcool * capacidade;
		printf("\nCom %.2fL, gastaria R$%.2f", capacidade, valor);
	}
}
