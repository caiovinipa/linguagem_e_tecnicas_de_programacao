#include <stdio.h>
char time1[20], time2[20]; 
int gols1, gols2;
main(){
	printf("Digite o nome do time 1: ");
		fflush(stdin);
		fgets(time1, 20, stdin);
		printf("Digite o numero de gols do time 1: " );
		scanf("%i", gols1 );
	printf("\nDigite o nome do time 2: ");
		fflush(stdin);
		fgets(time2, 20, stdin);
		printf("Digite o numero de gols do time 2: " );
		scanf("%i", gols2 );
	
	if(time1 == time2){
		printf("Empate");
	}else{
		if(gols1>gols2){
				printf("Time vencedor: %s", time1);
		}else{
			printf("Time vencedor: %s", time2);
		}
	}
}
