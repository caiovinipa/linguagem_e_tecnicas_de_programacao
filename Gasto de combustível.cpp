#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	char tipo;
	float capacidade, valor, gasolina = 6.50, alcool = 4.50;
		printf("Digite a capacidade máxima do carro em litros: ");
		scanf("%f", &capacidade);
		printf("Ele utiliza qual tipo de combustível?\nDigite G para gasolina e A para álcool: ");
		scanf("%c", &tipo);
	if (tipo == "G" ){
	valor = gasolina * capacidade; 
		printf("Com %.2fL, gastaria R$%.2f", capacidade, valor);
	}else{
	valor = alcool * capacidade;
		printf("\nCom %.2fL, gastaria R$%.2f", capacidade, valor);
	}
}
