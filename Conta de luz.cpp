#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float conta_luz;
	printf("Digite o valor da conta de luz: ");
	scanf("%f", &conta_luz);
	
	if (conta_luz >= 50){
		printf("Você está gastando muito");
	}else {
		printf("Seu gasto foi normal");
	}
}
