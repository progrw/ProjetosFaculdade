#include <stdio.h>
int main(){
	float salario, reajuste, salarioFinal, abono, valorReajuste;
	
	reajuste = 7.5;
	abono = 150;
	
	printf("***********************************************************************************\n");
	printf("\n* EMPRESA: TWO BROTHERS *\n ");
	printf("* Nome: Robert Willians Faria Martins *\n");
	printf("* RA: 21002996-5 *\n");
	printf("\n***********************************************************************************\n");
	printf("Informe seu salario liquido do ultimo holerite: R$");
	scanf("%f", &salario);
	printf("\n***********************************************************************************\n");
	printf("\n*Salario liquido informado: R$ %.2f *\n", salario);
	
		valorReajuste = salario * (reajuste/100);
		salarioFinal = salario + valorReajuste;
	
	printf("*Valor do reajuste: R$ %.2f *\n", valorReajuste);	
	printf("*Salario com reajuste: R$ %.2f *\n", salarioFinal);
	printf("\n*Salario com valor menor ou igual a R$1750,00 recebera um abono de R$150,00 *\n ");	
	
	if(salarioFinal <= 1750){
		
		salarioFinal = salarioFinal + abono;
		printf("\n**Voce tem direito a receber o abono!**\n");		
		printf("*Salario a receber: R$ %.2f\n", salarioFinal);
		printf("\n***********************************************************************************\n");
	}
	else{
		
		printf("\n**Voce nao tem direito a receber o abono!**\n");
		printf("*Salario a receber: R$ %.2f\n", salarioFinal);
		printf("\n***********************************************************************************\n");
	}
	return (0);
}
