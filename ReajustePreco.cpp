/*
	Name: ReajustePreco.cpp
	Author: Kaio Campos
	Date: 02/06/25 21:40
	Description: Programa que le um valor e faz o reajuste.
*/

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero, percentual, valor;
	numero = 0; valor = 0; percentual = 0;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	printf("Digite o percentual do reajuste: ");
	scanf("%d", &percentual);
	
	valor = numero + (numero * percentual / 100);
	
	printf("O valor com reajuste: %d", valor);
}
