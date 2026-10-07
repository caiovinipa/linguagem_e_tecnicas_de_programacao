#include<stdio.h>
int impar=0;
main(){
	for(int i=10;i<=20;i++){
	
	if((i%2)!=0){
		impar+=i;
		}
	}
		printf("A soma dos numeros impares e: %i",impar);
}
