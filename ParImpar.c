/*
	Name: ParImpar.c
	Author: Kaio Campos
	Date: 27/08/25 20:11
	Description: Verificar se o número digitado pelo usuário é par ou ímpar.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, par, impar;
	num = par = impar = 0;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("Este número é par!");
		par = num;
	}else
	{
		printf("Este número é ímpar!");
		impar = num;
	}

}
