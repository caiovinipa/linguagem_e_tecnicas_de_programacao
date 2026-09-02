#include <stdio.h>

main(){
	float nota1, nota2, nota3, nota4, mediaF, exame, posExame;
	
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &nota3);
		
		printf("Digite a quarta nota: ");
		scanf("%f", &nota4);
		
		mediaF = ((nota1 + nota2 + nota3 + nota4)/4);
		
		if(mediaF>=7){
			printf("Aluno foi aprovado, media: %f.2", mediaF);
		}if(mediaF<7){
			printf("\nSua media foi menos que 7, digite sua nota do exame final: ");
			scanf("%f", &exame);
			posExame = (exame + mediaF) /2;
		}if(posExame>=5){
			printf("Voce foi aprovado!!");
		}else{
			printf("Voce foi reprovado");
		}
			
}
