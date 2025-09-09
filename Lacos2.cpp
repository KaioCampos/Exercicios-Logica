/*
	Name: Lacos2.cpp
	Author: Kaio Campos
	Date: 09/09/25 19:16
	Description: Programa para entender a logica sobre laço de repetição do...while.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, rep, soma;
	num = rep = soma = 0;

	printf("Digite o número de repetições: ");
	scanf("%d", &rep);
	
	int i = 1;
	do
	{
		printf("Digite o %dº número: ", i);
		scanf("%d", &num);
		soma = soma + num;
		i++;
	}while(i <= rep);
	
	printf("\nSoma dos números informados: %d", soma);
	
	return 0;
}
