/*
    Lista de Exercicios 03
    Exercicio PUM
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int linhas = 0, cont = 1;
    scanf("%d",&linhas);
    for(cont; cont<=linhas*4;cont++){
        if(cont%4==0){
           printf("PUM\n"); 
        }else{
            printf("%d ",cont);
        }
    }
    return 0;
}