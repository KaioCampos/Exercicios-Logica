/*
	Name: Lacos.cpp
	Author: Kaio Campos 
	Date: 09/09/25 18:46
	Description: Programa para entender a logica sobre la�o de repeti��o while.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, rep, soma;
	num = rep = soma = 0;
	
	printf("Digite um n�mero inteiro (Quantidade de repeti��es): ");
	scanf("%d", &rep);
	
	int i = 1;
	while(i <= rep)
	{
		printf("Digite o %d� n�mero: ", i);
		scanf("%d", &num);
		soma = soma + num;
		i++;
	}
	
	printf("\nSoma total dos n�meros informados: %d", soma);
	
	return 0;
}
