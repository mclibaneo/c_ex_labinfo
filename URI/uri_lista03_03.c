/*
    Lista de Exercicios 03
    Exercicio 03
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int idade = 0, cont=0;
    float soma = 0.0;    
    while(1){
        scanf("%d",&idade);
        if(idade<0){
            break;
        }else{
            soma += idade;
            cont++;             
        }         
    }    
    printf("%.2f\n",soma/cont);
    return 0;
}