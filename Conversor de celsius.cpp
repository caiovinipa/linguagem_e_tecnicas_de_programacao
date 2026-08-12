#include <stdio.h>

main(){
	float celsius, fahrenheit, valor;
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsius * 1.8 + 32;
	printf("\nO valor em fahrenheit sera: %.0fF", fahrenheit );
}
