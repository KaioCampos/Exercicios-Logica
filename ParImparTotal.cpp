/*
	Name: ParImparTotal.c
	Author: Kaio Campos
	Date: 27/08/25 20:11
	Description: Entrada de 10 numeros inteiros, onde � verificado total de numeros pares e total de numeros �mpares.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, par, impar, i;
	num = par = impar = 0;
	i = 1;
	
	while(i <= 10)
	{
		printf("Digite o %d� n�mero inteiro: ", i);
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			par++;
		}else
		{
			impar++;
		}
	
		i++;
	}
	
	printf("\nTotal de n�meros pares �: %d", par);
	printf("\nTotal de n�meros �mpares �: %d", impar);
	
}
