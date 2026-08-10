#include <stdio.h>

//==EX5_Sabendo que um latão é constituído de 70% de cobre e 30% de zinco, indique a quantidade de cada um desses componentes para se obter uma certa quantidade de latão informada pelo usuário.

float latoes, zinco, cobre;

main(){
	printf("Informe a quantidade de latoes: ");
	scanf("%f" , &latoes);
	cobre = latoes * 0.7;
	zinco = latoes * 0.3;
	printf("\nA porcentagem de cobre no total sera: %.1f", cobre );
	printf("\nE a de zinco sera: %.1f", zinco);
}
