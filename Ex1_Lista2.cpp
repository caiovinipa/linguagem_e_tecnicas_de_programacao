#include<stdio.h>
int num, cont;
main(){
	cont=0;
	for(int i=1; i<=10; i++){
		printf("Digite o %i numero:\n",i);
		scanf("%d", &num);
		if(num %3 == 0){
		 cont++;
		}
	}
	printf("\nTotal de numeros multiplos de 3 = %d", cont);
}
