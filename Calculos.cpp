/*
	Name: Calculos.cpp
	Author: Kaio Campos
	Date: 27/08/25 19:42
	Description: Programa que fa�a a leitura de dois dados inteiros e calcule a soma, a subtra��o, a divis�o e a multiplica��o.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma, sub, mult;
	float div;
	num1 = num2 = soma = sub = mult = div = 0;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	
	printf("\nA soma dos dois n�meros �: %d", soma);
	printf("\nA subtra��o dos dois n�meros �: %d", sub);
	printf("\nA multiplica��o dos dois n�meros �: %d", mult);
	
	if (num2 != 0)
	{
		div = (float) num1 / num2;
		printf("\nA divis�o dos dois n�meros �: %.1f", div);
	}else{
		 printf("\nN�o � poss�vel dividir por zero!");
		 }
	
	return 0;
	
}

