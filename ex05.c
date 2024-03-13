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
    char corOlhos[20], corCabelos[20];

    while (idade != -1)
    {
        printf("Digite sua idade: \n");
        scanf("%d", &idade);

        if (idade == -1)
        {
            break;
        }
        

        if (maiorIdade < idade)
        {
            maiorIdade = idade;
        }

        printf("Digite o sexo 'M'(Masculino) ou 'F'(Feminino): \n");
        scanf(" %c", &sexo);

        if(sexo == 'F' || sexo == 'f' && (idade > 17 && idade < 35) )
        {
            printf("Digite a cor do seu cabelo: \n");
            scanf(" %s", &corCabelos);
            printf("Digite a cor dos seus olhos: \n");
            scanf(" %s", &corOlhos);

            //Como funciona a string compare(ou strcmp), ela compara as strings e retorna um valor.
            /*A função strcmp retorna 0 quando as strings são iguais. Para verificar se a cor do cabelo é "louro" ou "loiro", 
            você precisa verificar se strcmp retorna 0 para ambas as comparações.*/
            if ((strcmp(corCabelos, "louro") == 0 || strcmp(corCabelos, "loiro")) == 0 && (strcmp(corOlhos, "verde")) == 0)
            {
                qntdMulheres++;
            }   
        }
    }
     printf("A maior idade é: %d\n", maiorIdade);
     printf("A quantidade de Mulheres dentre as especificacoes e: %d", qntdMulheres);

}