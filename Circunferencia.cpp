/*
	Name: Circunferencia.cpp
	Author: Kaio Campos
	Date: 02/06/25 21:25
	Description: Programa que exiba o perimetro de uma circunferencia.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio, pi, perimetro;
	perimetro = 0.0; pi = 3.1416; raio = 0.0;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio;
	
	printf("O perímetro da Circunferência é: %.2f", perimetro);
}

