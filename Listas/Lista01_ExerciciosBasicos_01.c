/*
    Lista de Exercícios 01
    Exercício 01
    Autor: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    //Elabore um algoritmo que leia as 4 notas bimestrais de um aluno, calcule e apresente a média obtida.
    float nota1=0.0;
    float nota2=0.0;
    float nota3=0.0;
    float nota4=0.0;
    float media=0.0;
    printf("***** Calcular nota do aluno *****");
    printf("\n");
    printf("Informe a nota do primeiro bimestre: ");
    scanf("%f",&nota1);
    printf("Informe a nota do segundo bimestre: ");
    scanf("%f",&nota2);
    printf("Informe a nota do terceiro bimestre: ");
    scanf("%f",&nota3);
    printf("Informe a nota do quarto bimestre: ");
    scanf("%f",&nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("A media do(a) aluno(a): %.2f",media);
    return 0;
}
