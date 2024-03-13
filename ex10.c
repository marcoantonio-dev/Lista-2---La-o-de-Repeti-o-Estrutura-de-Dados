#include<stdio.h>
#include<stdlib.h>

/*
Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos 
deles estão fora do intervalo, escrevendo estas informações.
*/

int main()
{

    int valores = 0;
    int contaDentro = 0;
    int contaFora = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valores);

        if (valores > 9 &&  valores < 21) 
        {
            contaDentro++;
        }else
            contaFora++;
    }

    printf("Ha: %d valores que voce digitou que estao entre 10 e 20 \n", contaDentro);
    printf("Ha: %d valores que voce digitou que estao nao entre 10 e 20 \n", contaFora);
    

}