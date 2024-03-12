#include<stdio.h>
#include<stdlib.h>

/*
2. (WHILE) Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. 
Termine a leitura se o usuário digitar zero (0).
*/

int main()
{
    int numeros = 0;
    int soma = 0;
    int quantidade = 0;

    while (1)
    {   
        printf("Digite vaios numeros (digite 0 para encerrar): ");
        scanf("%d", &numeros);

        if (numeros == 0)
            break;

        if (numeros % 2 == 0)
        {
            soma += numeros;
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        int media = soma / quantidade;
        printf("A media dos números pares digitados e: %d\n", media);
    }
    else
    {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}
