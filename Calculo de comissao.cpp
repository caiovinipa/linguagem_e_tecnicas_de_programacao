#include <stdio.h>


//== Ex4_Calcule o pagamento de comissão de vendedores, levando-se em consideração que sua comissão será de 5% do total da venda, o usuário ira informar o valor total da venda.
float total;
float comissao;
float porcentagem = 0.05;

main(){
	printf("\nDigite o valor total das vendas: \n");
	scanf("%f" , &total);
	comissao = total * porcentagem;
	printf("\nO valor total da comissao e: R$ %.2f" , comissao);
}
