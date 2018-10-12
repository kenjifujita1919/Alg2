// Aula 1110 calculadora simples.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>

int soma2valores(int x,int y)
{
	int c;
	c = x + y;
	return c;
}

int subtracao2valores(int x, int y)
{
	int c;
	c = x - y;
	return c;
}

int multiplicacao2valores(int x, int y)
{
	int c;
	c = x*y;
	return c;
}

float divisao2valores(float x, float y)
{
	float c;
	c = x / y;
	return c;
}

int LerNumeroInteiros()
{
	printf("\nfavor digitar um numero inteiro");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

int main()
{
	int op, num1, num2, resultado;

	printf("\n**Calcular**\n\n1=Adicao\n\n2=Subtracao\n\n3=Multiplicacao\n\n4=Divisao");
	scanf_s("%f, &op");

	if (op == 1)
	{
		printf("A operacao escolhinha foi Adicao\n");
		printf("Insira o primeiro numero:\n");
		scanf("%f,&num1");
		printf("Insira o segundo numero:\n");
		scanf("%f,&num2");
		resultado=soma2valores(num1, num2);
		printf("O resultado da operacao eh: %d\n", resultado);

	}
	system("pause");
}

