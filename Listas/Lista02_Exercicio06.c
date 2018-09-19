/*
    Lista de Exercicios 02
    Exercicio 06
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    /*
        Escreva um algoritmo em pseudocódigo que leia duas variáveis dadas pelo usuário, 
        em seguida apresente um menu para o usuário perguntando qual operação matemática ele deseja executar. 
        Cuidado com a divisão que não pode ser por 0 (zero).

    */
    int a,b,opcao = 0;
    printf("========== Exercicio 6 ==========");
    printf("\n");
    printf("Informe dois números em sequência:\n");
    scanf("%d %d", &a, &b);
    printf("Escolha uma opcao: Soma(1), Subtracao(2), Divisao(3), Multiplicacao(4)\n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            printf("%d + %d = %d", a,b, a+b);
        break;
        case 2:
            printf("%d - %d = %d", a,b, a-b);
        break;
        case 3:
            if(b == 0)
                printf("Divisao por ZERO nao valida");
                break;
            printf("%d / %d = %d", a,b, a/b);
        break;
        case 4:
            printf("%d * %d = %d", a,b, a*b);
        break;
        default:
            printf("Nao foi possivel identificar a opcao.");
        break;
    }
}