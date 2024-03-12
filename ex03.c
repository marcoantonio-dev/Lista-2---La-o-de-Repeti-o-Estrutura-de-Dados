#include<stdio.h>
#include<stdlib.h>

/*
(DO WHILE) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos 
seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.*/

int main()
{

    float numeros = 0;
    int intervaloUm = 0;
    int intervaloDois = 0;
    int intervaloTres = 0;
    int intervaloQuatro = 0;

    do
    {

      printf("Digite um numero \n");
      scanf("%d", &numeros);
      if (numeros >= 0 & numeros < 26)
      {
        intervaloUm++;
      }else if (numeros > 25 & numeros < 51)
      {
        intervaloDois++;
      }else if (numeros > 50 & numeros < 76)
      {
        intervaloTres++;
      }else if (numeros > 75 & numeros < 101)
      {
        intervaloQuatro++;
      }
      
      

    } while (numeros >= 0);
    

}