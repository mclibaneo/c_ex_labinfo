/*
    Lista de Exercícios 01
    Exercício 07
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    /*        
       Elabore um algoritmo que leia uma temperatura em graus Centígrados e 
       apresente-a convertida em graus Fahrenheit. A fórmula é: 
       F = (9 * C + 160) / 5.
    */    
    float centigrados = 0.0;
    float fahrenheit = 0.0;       
    printf("***** Conversao de Centigrados para Fahrenheit *****");
    printf("\n");
    printf("Por favor, informe a temperatura desejada em Centigrados:");
    scanf("%f",&centigrados);
    fahrenheit = (9*(centigrados+160))/5.0;
    printf("%.1f Centigrados <-> %.1f Fahrenheit", centigrados, fahrenheit);
    return 0;
}
