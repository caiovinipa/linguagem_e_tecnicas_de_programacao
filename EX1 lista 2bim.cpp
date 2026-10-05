#include <stdio.h>

main(){
	int numero, i, pares = 0, impares = 0;	
		for(i=1; i<=5;i++){
			printf("Digite um numero: ");
			scanf("%i", &numero);
			
		if(numero %2 == 0){
			pares++;
		}else{
			impares++;	
		}
	}	
			printf("A quantidade de numeros pares e : %i", pares);
			printf("\nA quantidade de numeros impares e : %i", impares);
}
