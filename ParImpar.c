/*
	Name: ParImpar.c
	Author: Kaio Campos
	Date: 27/08/25 20:11
	Description: Verificar se o n�mero digitado pelo usu�rio � par ou �mpar.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num, par, impar;
	num = par = impar = 0;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("Este n�mero � par!");
		par = num;
	}else
	{
		printf("Este n�mero � �mpar!");
		impar = num;
	}

}
