    /*
        Lista de Exercicios 02
        Exercicio 08
        Aluno: Murilo Carvalho
    */
    #include <stdio.h>
    #include <conio.h>
    int main(){
        /*
            Escreva um algoritmo em pseudocódigo que leia o conceito anual de um aluno em uma disciplina e 
            informe o desempenho dele. Se for um conceito inválido escreva uma mensagem informando o ocorrido. 
            Exemplo: “A” - Conhecimento Pleno, “B” - Conhecimento Parcialmente Pleno, 
            “C” - Conhecimento Suficiente, “D” - Conhecimento Insuficiente. 
            “Qualquer outro valor”: Conceito Inválido.
        */
        char conceito;
        printf("========== Exercicio 8 ==========");
        printf("\n");
        printf("Informe o conceito anual do(a) Aluno(a):\n");
        conceito = getch();
        switch(conceito){
            case 'A':
                printf("A - Conhecimento Pleno");
            break;
            case 'B':
                printf("B - Conhecimento Parcialmente pleno");
            break;
            case 'C':
                printf("C - Conhecimento Suficiente");
            break;
            case 'D':
                printf("D - Conhecimento Insuficiente");
            break;
            default:
                printf("Conceito Inválido");
            break;
        }
    }