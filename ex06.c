#include<stdio.h>
#include<stdlib.h>

/*
6. (FOR) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.
*/

int main()
{

    for(int numero = 1000;  numero <2000; numero++)
    {
        if(numero % 11  == 5) 
        {
            printf("Os numeros divididos por 11 com divisao resto sao: %d\n",numero);  
        }
    }
}

