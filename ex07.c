#include<stdio.h>
#include<stdlib.h>

/*
(WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. 
A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. 
*/

int main() {
    int numeroDePessoas = 0;
    double salarioTotal = 0.0;
    int numeroDeFilhos = 0;
    double maiorSalario = -1.0;
    int pessoasDeSalarioBaixo = 0;

    while (1) {
        double salario;
        int filhos;

        printf("Digite seu salario: ");
        scanf("%lf", &salario);

        if (salario < 0) {
            break;
        }

        printf("QUantos filhos tem sua familia? ");
        scanf("%d", &filhos);

        numeroDePessoas++;
        salarioTotal += salario;
        numeroDeFilhos += filhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            pessoasDeSalarioBaixo++;
        }
    }

    float mediaSalarial = salarioTotal / numeroDePessoas;
    short mediaDeFilhos = numeroDeFilhos / numeroDePessoas;
    float percentualDePessoasComSalarioBaixo = pessoasDeSalarioBaixo / numeroDePessoas * 100.0;

    printf("A Media salarial e: %f\n", mediaSalarial);
    printf("A media do numero de filhos e: %hd\n", mediaDeFilhos);
    printf("O maior salario de todos e: %f\n", maiorSalario);
    printf("O percentual de pessoas com salario ate R$100,00 e de %f por cento: \n", percentualDePessoasComSalarioBaixo);

}