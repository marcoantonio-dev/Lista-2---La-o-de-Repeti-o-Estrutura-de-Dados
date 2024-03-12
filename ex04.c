#include<stdio.h>
#include<stdlib.h>

/*
4. (FOR) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, 
sexo (M/F) e salário. Faça um algoritmo que informe de 15 pessoas:  

a) a média de salário do grupo;

b) maior e menor idade do grupo;

c) quantidade de mulheres com salário até R$100,00.
*/

int main()
{

    int idade = 0;
    char sexo;
    float salario = 0.0;

    float somaSalarial = 0.0;
    int somaIdade = 0;

    float mediaSalarial = 0.0;
    int mediaIdade = 0;
    int qntdMulheres = 0;

    int i = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o Salario: \n");
        scanf("%f", & salario);
        somaSalarial  += salario;
        
        printf("Informe a Idade:\n");
        scanf(" %d", &idade);
        somaIdade += idade;

        printf("Sexo: *M* Masculino | *F* Feminino: \n");
        scanf(" %c", &sexo);

        if ((sexo == 'F' || sexo == 'f') && salario < 101.0)
        {
            qntdMulheres++;
        }
           
    }
    mediaSalarial = somaSalarial / 15;
    mediaIdade = somaIdade / 15;
    printf("Media salarial %f\n", mediaSalarial);
    printf("Media de idade %d\n", mediaIdade);
    printf("Quantidade de mulheres que recebm menos que 100 e igual a: %d", qntdMulheres);
}