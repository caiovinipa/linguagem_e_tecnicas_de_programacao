#include<stdio.h>
int altura, maior, menor;
main(){
	
	printf("Digite a primeira altura: ");
    	scanf("%d", &altura);
    	maior = menor = altura;
	
	for(int i=1;i<=5;i++){
		printf("Digite uma altura: ");
		scanf("%d", &altura);
		
		if(altura>maior) maior = altura;
		if(altura<menor) menor = altura;
	}
	
	 printf("O maior numero e: %d\n", maior);
	 printf("O menor numero e: %d\n", menor); 
}
