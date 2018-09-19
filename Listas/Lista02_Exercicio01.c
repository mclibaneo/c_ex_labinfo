/*
    Lista de Exercicios 02
    Exercicio 01
    Aluno: Murilo Carvalho
*/

#include <stdio.h>

int main(){
    /*
        Criar um algoritmo que leia 2 números. 
        Caso o primeiro número lido seja maior que o segundo,
        imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
    */
    int a,b;
    a = 0;
    b = 0;
    printf("========== Exercicio 1 ==========");
    printf("\n");
    printf("Digite dois numeros: A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    if(a>b){
        printf("A - B: %d - %d = %d", a,b, (a-b));
    }else{
        printf("A + B: %d + %d = %d", b,a, (a+b));
    }
}