/*
	Name: Laco3.cpp
	Author: Kaio Campos
	Date: 09/09/25 19:37
	Description: Programa para entender a logica sobre laço de repetição for.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int rep, num, soma;
	rep = num = soma = 0;
	
	printf("Digite o número de repetições: ");
	scanf("%i", &rep);
	
	for(int i = 1; i <= rep; i++)
	{
		printf("Digite o %iº número: ", i);
		scanf("%i", &num);
		soma = soma + num;
	}
	
	printf("Soma dos valores informados: %i", soma);
	
	return 0;
}

