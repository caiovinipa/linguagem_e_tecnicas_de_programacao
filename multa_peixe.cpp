#include <stdio.h>
	
main(){
	float P, E, M;
	printf("Qual o peso do peixe? ");
	scanf("%f", &P);
	if(P > 50){
		E = P - 50;
		M = E * 4;
		printf("Voce tera que pagar a multa no valor de: R$%.2f", M);
	} else{
		printf("Voce nao precisa pagar multa!!\nPeso = %.2fKg", P);
	}
}
