/*
	Name: Lacos4.cpp
	Author: Kaio Campos
	Date: 09/09/25 19:44
	Description: Programa para entender a logica sobre laços de repetição while, do while e for.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int rep, num, soma;
	char resp;
	rep = num = soma = 0;
	resp = ' ';
	
	printf("Qual laço de repetição que usar? (Do..While(D), While(W) ou For(F)): ");
	scanf(" %c", &resp);
	if(resp == 'D' || resp == 'd')
	{
		printf("Digite o número de repetição: ");
		scanf("%d", &rep);
		
		int i = 1;
		do
		{
			printf("Digite o %dº número: ", i);
			scanf("%d", &num);
			soma += num;
			i++;
		}while(i <= rep);
		
		printf("\nSoma dos números informados: %d", soma);
	}
	
	else if(resp == 'W' || resp == 'w')
	{
		printf("Digite o número de repetição: ");
		scanf("%d", &rep);
		
		int i = 1;
		while(i <= rep)
		{
			printf("Digite o %dº número: ", i);
			scanf("%d", &num);
			soma += num;
			i++;
		}
	
		printf("\nSoma total dos números informados: %d", soma);
	}
	
	else if(resp == 'F' || resp == 'f')
	{
		printf("Digite o número de repetição: ");
		scanf("%d", &rep);
		
		for(int i = 1; i <= rep; i++)
		{
			printf("Digite o %dº número: ", i);
			scanf("%d", &num);
			soma += num;
		}
	
		printf("Soma dos valores informados: %d", soma);
	}
	else
	{
		printf("Opção inválida!");
	}
	
	return 0;
}
