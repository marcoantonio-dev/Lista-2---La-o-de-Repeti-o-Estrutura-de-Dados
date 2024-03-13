#include<stdio.h>
#include<stdlib.h>

/*
Escrever um algoritmo que calcule e mostre a média aritmética
dos números lidos entre 13 e 73.
*/

int main()
{
    int vetor[74-13];
    double soma = 0.0;
    double media = 0.0;

    for (int i = 0; i < 74-13; i++) {
        vetor[i] = 13 + i;
    }

    for (int i = 0; i < 74-13; i++) {
        soma += vetor[i];
    }

    media = soma / (74-13);

    printf("A média aritmética dos números de 13 a 73 é: %.2f\n", media);

    return 0;
}