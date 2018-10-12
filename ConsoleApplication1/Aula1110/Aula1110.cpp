// Aula1110.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>

	void Helloword()
	{
		printf("\nHello Word\n");
	}

	int somar2valores(int x, int y)
	{
		int c;
		c = x + y;
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
		Helloword();

		int a = somar2valores(55, 44);
		printf("Resultado da soma: %i\n", a);

		int primeiroValor = LerNumeroInteiros();
		int segundoValor = LerNumeroInteiros ();
		int d = somar2valores(primeiroValor, segundoValor);
		printf("Resultado da soma: %i\n", d);

		system("pause");
    return 0;
}

