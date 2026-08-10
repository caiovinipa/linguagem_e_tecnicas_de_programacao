#include <stdio.h>

main(){
	float celsius, fahrenheit, valor;
	printf("Digite a temperatura em celsius: ");
	scanf("%f", &celsius);
	fahrenheit = 9 * celsius + 160;
	printf("\nO valor em fahrenheit sera: %.1f", fahrenheit );
}
