/*
	Name: Calculos.cpp
	Author: Kaio Campos
	Date: 27/08/25 19:42
	Description: Programa que faça a leitura de dois dados inteiros e calcule a soma, a subtração, a divisão e a multiplicação.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma, sub, mult;
	float div;
	num1 = num2 = soma = sub = mult = div = 0;
	
	printf("Digite o 1º número: ");
	scanf("%d", &num1);
	
	printf("Digite o 2º número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	
	printf("\nA soma dos dois números é: %d", soma);
	printf("\nA subtração dos dois números é: %d", sub);
	printf("\nA multiplicação dos dois números é: %d", mult);
	
	if (num2 != 0)
	{
		div = (float) num1 / num2;
		printf("\nA divisão dos dois números é: %.1f", div);
	}else{
		 printf("\nNão é possível dividir por zero!");
		 }
	
	return 0;
	
}

