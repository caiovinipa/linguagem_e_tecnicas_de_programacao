#include <locale.h>
#include <stdio.h>	
float altura, peso_ideal;
int genero;
main(){	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual sua altura: ");
	scanf("%f", &altura);

	printf("Qual seu gênero?\n");
	printf("1- HOMEM 2- MULHER\n\n");
	scanf("%i", &genero);
	
	switch (genero){
		case 1:
			peso_ideal = (72.7*altura) - 58;
		break;
		case 2:
			peso_ideal = (62.1*altura) - 44.7;
		break;
	}
	printf("\nSeu peso ideal é: %.1f", peso_ideal);
}

	
	
