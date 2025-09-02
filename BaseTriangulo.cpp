/*
	Name: BaseTriangulo.cpp
	Author: Kaio Campos 
	Date: 02/06/25 21:34
	Description: Programa que leia as medidas de um triangulo e calcule a sua area.
*/

 #include<stdio.h>
 #include<locale.h>
 
 int main()
 {
	setlocale(LC_ALL,"Portuguese");
	
 	float area, largura, altura;
 	area = largura = altura = 0.0;
 	printf("Digite a largura do tri�ngulo: ");
 	scanf("%f", &largura);
 	
 	printf("Digite a altura do tri�ngulo: ");
 	scanf("%f", &altura);
 	
 	area = (largura * altura) / 2;
 	
 	printf("A area do tri�ngulo �: %.2f", area);
 	
 }
