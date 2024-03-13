#include<stdio.h>
#include<stdlib.h>

/*
Escrever um algoritmo que gera e escreve os números 
ímpares entre 100 e 200.
*/

int main()
{

    int numImpars = 0;

    for (int i = 100; i < 201; i++)
    {
        if(i % 2 != 0)
        {
           printf("%d \n",i); 
        }
    }

    
    

}