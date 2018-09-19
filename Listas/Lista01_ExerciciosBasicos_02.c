/*
    Lista de Exercícios 01
    Exercício 02
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    //Elabore um algoritmo que leia o raio de uma circunferência,calcule e apresente sua área.
    float const pi = 3.14;
    float raio = 0.0;
    float areaCirculo = 0.0;
    printf("***** Calcular area de circunferencia *****");
    printf("\n");
    printf("Informe o raio da circunferencia: ");
    scanf("%f",&raio);
    areaCirculo = pi*(raio*raio);
    printf("A area da circunferencia: %.2f",areaCirculo);
    return 0;
}
