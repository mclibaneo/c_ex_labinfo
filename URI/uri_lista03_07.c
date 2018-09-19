/*
    Lista de Exercicios 03
    Exercicio 07
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){    
    int x = 1, y = 0;    
    while(x!=y){
        scanf("%d %d", &x, &y);
        if(x>y) printf("Decrescente\n");
        if(x<y) printf("Crescente\n");        
    }    
    return 0;
}