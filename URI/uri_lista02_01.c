/*
    Lista de Exercicios 02 URI
    Exercicio 01
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    float preco = 0.0;
    float total = 0.0;
    int codigo = 0;
    int quantidade = 0;
    scanf("%d %d", &codigo, &quantidade);
    switch(codigo){
        case 1:
        preco = 4.0;
        total = quantidade * preco; 
        break;
        case 2:
        preco = 4.5;
        total = quantidade * preco;
        break;
        case 3:
        preco = 5.0;
        total = quantidade * preco;
        break;
        case 4:
        preco = 2.0;
        total = quantidade * preco;
        break;
        case 5:
        preco = 1.5;
        total = quantidade * preco;
        break;
        default:
        break;
    }
    printf("Total: R$ %.2f\n", total);
   return 0;
}