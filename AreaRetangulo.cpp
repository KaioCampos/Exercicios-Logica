/*
	Name: AreaRetangulo.cpp
	Author: Kaio Campos
	Date: 02/06/25 21:15
	Description: Programa que calcula a area de um ret�ngulo.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float area, largura, comprimento;
	area = largura = comprimento = 0.0;
	
	printf("Digite a largura do ret�ngulo: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento do ret�ngulo: ");
	scanf("%f", &comprimento);
	
	area = largura * comprimento;
	
	printf("A Area do ret�ngulo � igual a: %.2f", area);
	
}
