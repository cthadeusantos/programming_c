#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void swap(&x,&y){
	aux = *x;
	&x = y;
	&y = aux;
}

int main()
{
	int a , b;
	a = 1;
	b = 2;
	setlocale(LC_ALL, "");
	swap(a,b);
	printf("a = %i / b = %i", a, b); 
}
