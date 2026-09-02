#include <stdio.h>

main(){
	float temperatura;
	
	printf("Digite a temperatura que aparece no termometro: ");
	scanf("%f", &temperatura);
	
	if(temperatura<100){
		printf("\nA temperatura esta muito baixa.");
	}else if(temperatura<=200)
		printf("\nA temperatura esta baixa.");
	else if(temperatura<500)
		printf("\nTemperatura esta normal.");
	else{
		printf("Temperatura esta muito alta.");
	}
}
