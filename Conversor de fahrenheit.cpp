#include	<stdio.h>
#include	<locale.h>
//==EX9_Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, fahrenheit;
	
	printf("Digite o valor em fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = ((fahrenheit - 32 ) * 5) / 9;
	printf("O valor em celsius é: %.2f", celsius );
}
