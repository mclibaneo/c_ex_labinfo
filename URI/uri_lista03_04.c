/*
    Lista de Exercicios 03
    Exercicio 04
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){    
    int senha = 0;
    while(senha!=2002){
        scanf("%d",&senha);
        if(senha == 2002){
            printf("Acesso Permitido\n");
        }else{
             printf("Senha Invalida\n");
        }         
    }        
    return 0;
}