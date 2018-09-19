/*
    Lista de Exercicios 02
    Exercicio 05
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    /*
        Crie um programa que leia 3 números inteiros diferentes e imprima os números em ordem crescente.
    */
    int a,b,c, maior, aux, menor = 0;
    printf("========== Exercicio 5 ==========");
    printf("\n");
    printf("Informe os três números em sequência:");
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    aux = b;
    menor = c;
    if(b>a){
        maior = b;
        aux = a;
        if(c>a){
            aux = c;
            menor = a;
        }
    }else{
        if(c>b){
            aux = c;
            menor = b;
        }
    }
    printf("%d\n%d\n%d",menor,aux,maior);
}