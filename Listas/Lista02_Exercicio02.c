/*
    Lista de Exercicios 02
    Exercicio 02
    Aluno: Murilo Carvalho
*/

#include <stdio.h>

int main(){
    /*
       Faça um programa que leia dois números. 
       Caso a soma dos dois números apresente um número par e 
       seja maior que 100 mostre a metade da soma na tela, 
       se a soma for um número par menor que 100, mostre a soma multiplicada por 2.
       Se a soma resultar em um número ímpar apenas apresente a soma..
    */
    int a,b,soma;
    a = 0;
    b = 0;
    soma = 0;
    printf("========== Exercicio 2 ==========");
    printf("\n");
    printf("Digite dois numeros: A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    soma = a+b;
    if(soma%2!=0){
        printf("Soma de numero impar A + B: %d + %d = %d", a,b,soma);
    }else{
        if(soma > 100){
            printf("Soma de numero par dividido por 2. (A + B)/2: (%d + %d)/2 = %d", a,b,soma/2);
        }else{
            printf("Soma de numero par multiplicado por 2. (A + B)*2: (%d + %d)*2 = %d", a,b,soma*2);
        }
    }
}