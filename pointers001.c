#include <stdio.h>
#include <stdlib.h>

int main(){
    int variable = 42;
    int *pointer; 

    pointer = &variable;

    printf("\nAcessando o conteúdo\n");
    printf("variable = %d\n", variable);
    printf("&variable = %p\n", &variable);
    printf("pointer = %p\n", pointer);
    printf("*pointer = %d\n", *pointer);
    
    printf("\nModificando o valor de variable ao atribuir *pointer = 21\n");
    *pointer = 21;
    printf("variable = %d\n", variable);
    printf("&variable = %p\n", &variable);
    printf("pointer = %p\n", pointer);
    printf("*pointer = %d\n", *pointer);
    
    int *p = 0x5DC;
    char *c = "X";
    printf("p = %d\nc = %s\n", p, c);
    p++;
    c++;
    c = "F";
    printf("p = %d\nc = %p\n", p, &c);
    
    return(0);
}
