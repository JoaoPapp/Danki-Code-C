#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;

    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nE seu sobrenome?\n");
    scanf("%S",sobrenome);

    printf("\nShow de bola, %s %S...Qual sua idade?\n",nome,sobrenome);
    scanf("%d",&idade);

    printf("\nMuito bom! o %s %S tem %d anos\n",nome,sobrenome,idade);

    printf("\nE em qual ano voce nasceu?\n");
    scanf("%d",&ano_nascimento);

    printf("\nQue bacana, o %s %S tem %d e nasceu no ano de %d\n",nome,sobrenome,idade,ano_nascimento);


    return 0;
}
