/*
	Name: Troca.cpp
	Author: Kaio Campos
	Date: 08/09/25 08:34
	Description: Progroma para realizar a troca de valores entre duas variaveis. 
*/

#include<stdio.h>

//Sessão de Prototipação
void trocar (int *, int *);

main()
{
	int a, b, aux;
	a = b = 0;
	
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	
	trocar(&a,&b);
	
	printf("\nA: %i", a);
	printf("\nB: %i", b);
	
}//fim do programa

//Função para trocar os valores de duas variaveis, com passagem de parametro por referencia.
void trocar(int *a, int *b)
{
	//int aux = 0;
	//aux = *a;
	//*a = *b;
	//*b = aux;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
