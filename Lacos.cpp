/*
	Name: Lacos.cpp
	Author: Kaio Campos 
	Date: 09/09/25 18:46
	Description: Programa para entender a logica sobre laço de repetição while.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, rep, soma;
	num = rep = soma = 0;
	
	printf("Digite um número inteiro (Quantidade de repetições): ");
	scanf("%d", &rep);
	
	int i = 1;
	while(i <= rep)
	{
		printf("Digite o %dº número: ", i);
		scanf("%d", &num);
		soma = soma + num;
		i++;
	}
	
	printf("\nSoma total dos números informados: %d", soma);
	
	return 0;
}
