#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor; // Atribuindo o endereco de valor a x;
	y = *x; // Atribuindo o conteudo da variavel apontada por x a y;

	printf("Endereço da variável comum valor: %p\n", &valor);
	printf("Lendo o conteúdo do ponteiro x: %p\n", x);
	printf("Endereço da variavel ponteiro x: %p\n", &x);
	printf("Conteudo da variavel apontada por x: %d\n", *x);
	printf("Conteudo da variavel comum y: %d\n", y);

}
