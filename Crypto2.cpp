/*
	Name: Crypto2.cpp
	Author: Kaio Campos
	Date: 08/09/25 07:59
	Description: Programa para cifrar uma mensagem realizando o "merge" entre dois vetores de caracteres.
*/

#include<stdio.h>


//Sessão de Prototipação
void merge (char [], char []);

//Variáveis globais, todo o programa enchegar essas variaveis.
int i,j;
char crypto[40]; //Junção dos dois vetores

main()
{
	i = j = 0;
	char nome[20]; //nome completo
	char docs[20]; //cpf e rg
	
	printf("Digite seu nome completo: \n");
	gets(nome);
	printf("\nInforme seu CPF e RG: \n");
	gets(docs);
	
	merge (nome, docs); // invoke da função
	
	puts("\nTexto cifrado: ");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]); 
		
}//fim do programa

//Função para realizar a mistura "merge" entre os dois vetores.

void merge(char nome[], char docs[])
{
	for(i =0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j + 2;
	}
}
