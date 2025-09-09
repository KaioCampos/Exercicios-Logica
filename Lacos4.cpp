/*
	Name: Lacos4.cpp
	Author: Kaio Campos
	Date: 09/09/25 19:44
	Description: Programa para entender a logica sobre la�os de repeti��o while, do while e for.
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
	
	printf("Qual la�o de repeti��o que usar? (Do..While(D), While(W) ou For(F)): ");
	scanf(" %c", &resp);
	if(resp == 'D' || resp == 'd')
	{
		printf("Digite o n�mero de repeti��o: ");
		scanf("%d", &rep);
		
		int i = 1;
		do
		{
			printf("Digite o %d� n�mero: ", i);
			scanf("%d", &num);
			soma += num;
			i++;
		}while(i <= rep);
		
		printf("\nSoma dos n�meros informados: %d", soma);
	}
	
	else if(resp == 'W' || resp == 'w')
	{
		printf("Digite o n�mero de repeti��o: ");
		scanf("%d", &rep);
		
		int i = 1;
		while(i <= rep)
		{
			printf("Digite o %d� n�mero: ", i);
			scanf("%d", &num);
			soma += num;
			i++;
		}
	
		printf("\nSoma total dos n�meros informados: %d", soma);
	}
	
	else if(resp == 'F' || resp == 'f')
	{
		printf("Digite o n�mero de repeti��o: ");
		scanf("%d", &rep);
		
		for(int i = 1; i <= rep; i++)
		{
			printf("Digite o %d� n�mero: ", i);
			scanf("%d", &num);
			soma += num;
		}
	
		printf("Soma dos valores informados: %d", soma);
	}
	else
	{
		printf("Op��o inv�lida!");
	}
	
	return 0;
}
