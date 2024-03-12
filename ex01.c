/*1. (WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler,
 além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nota1, nota2, nota3, media;
    int codigo = 1;
    
        while (1)
        {   

            printf("Digite o codigo do aluno: ");
            scanf("%d", &codigo);
            if (codigo == 0)
            break;
            
            printf("Digite as notas: ");
            scanf("%f", & nota1);
            scanf("%f", & nota2);
            scanf("%f", & nota3);

            media = (nota1 + nota2 + nota3) / 3.00;
            printf("%f", media);
        }
        
}