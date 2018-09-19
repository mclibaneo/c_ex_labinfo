/*
    Lista de Exercícios 01
    Exercício 10
    Autor: Murilo Carvalho
*/
#include <stdio.h>
#include <math.h>

int main(){
    /*        
       Elabore um algoritmo que leia um número inteiro representando a quantidade de alunos de uma turma. 
       Apresente a quantidade de grupos de 4 alunos que podem ser formados,
       e quantos alunos ficam de fora, sem formar um grupo completo.
    */   
    int qntdAlunos=0;
    printf("***** Formacao de Grupos de Alunos *****");
    printf("\n");
    printf("Vamos formar grupos, informa a quantidade de alunos:");    
    scanf("%d",&qntdAlunos);
    printf("\n");    
    printf("Quantidade de grupos de 4 alunos: %d", qntdAlunos/4);    
    printf("\n");
    printf("Alunos que nao formaram grupos: %d", qntdAlunos%4);    
    return 0;
}
