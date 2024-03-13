#include<stdio.h>
#include<stdlib.h>

/*
5. (WHILE) Faça um algoritmo que determine e escreva:   

- a maior idade dos habitantes

- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos
 louros.

O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.
*/

int main()
{

    int idade = 0;
    int maiorIdade = 0;
    int qntdMulheres = 0;
    int i = 0;
    int j = 0;
    char sexo;
    char corOlhos, corCabelos;

    //int vetor [];

    while (idade >= 0)
    {
        printf("Digite sua idade: \n");
        scanf("%d", &idade);

        if (maiorIdade < idade)
        {
            maiorIdade = idade;
        }

        printf("Digite o sexo 'M'(Masculino) ou 'F'(Feminino): \n");
        scanf(" %c", &sexo);

        if(sexo == 'F' || sexo == 'f')
        {
            printf("Digite a cor do seu cabelo: \n");
            scanf(" %c", &corCabelos);
            printf("Digite a cor dos seus olhos: \n");
            scanf(" %c", &corOlhos);
            if ((idade > 17 && idade < 35) && (corCabelos == 'louro' || corCabelos == 'loiro') && (corOlhos == 'verde'))
            {
                qntdMulheres++;
            }   
        }
    }
     printf("A maior idade é: %d\n", maiorIdade);

}