#include<stdio.h>
int numero, maior, menor, tabuada;
main(){
	
	printf("Digite um numero: ");
    	scanf("%i", &numero);
    	if(numero<=10){
    			printf("A tabuada desse numero e: \n");
    		for(int i=1;i<=10;i++){
				tabuada = numero*i; numero*i; numero*i; numero*i; numero*i; numero*i; numero*i; numero*i; numero*i; numero*i;
				printf("%i  ", tabuada);
			}
		}else{
			printf("Digite um numero menor que 10");
	}
}
