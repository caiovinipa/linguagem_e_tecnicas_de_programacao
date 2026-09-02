#include <stdio.h>

main(){
	
	int velocidadePermitida, velocidade, porCento;
	
		printf("Qual a velocidade maxima permitida? ");
		scanf("%i", &velocidadePermitida);
	
		printf("Qual a velocidade do veiculo? ");
		scanf("%i", &velocidade);
	porCento= velocidadePermitida + (velocidadePermitida*20/100);
	if(velocidade<=velocidadePermitida){
		printf("\nVelocidade permitida");
	}if(velocidade>velocidadePermitida && velocidade <= porCento){
		printf("\nMulta grave!!");
	}else{
		printf("\nMulta Gravissima!!");
	}		
}
