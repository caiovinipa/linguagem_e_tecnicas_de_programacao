#include <locale.h>
#include <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, nota4;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite sua quarta nota: ");
	scanf("%f", &nota4);
	
	float media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media >= 6){
		printf("Parabéns, com média %.1f você foi aprovado!!", media);
	}else{
		printf("Com média %.1f você foi reprovado", media);
	}
}
