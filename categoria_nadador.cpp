#include <stdio.h>
	
main(){
	float idade;
	
	printf("Digite a sua idade para sabermos sua categoria: ");
	scanf("%f", &idade);
	if (idade < 5){
		printf("\nVoce esta na categoria fraldinha.");
	}else if(idade <= 7){
		printf("\nCategoria Pre-mirim");
	}else if(idade <= 11){
		printf("\nCategoria Mirim");
	}else if(idade <= 13){
		printf("\nCategoria Infantil");
	}else if(idade <= 17){
		printf("\nCategoria Juvenil");
	}else{
		printf("\nCategoria adulto");
	}
	
}
