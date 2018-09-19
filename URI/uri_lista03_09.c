/*
    Lista de Exercicios 03
    Exercicio 09
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){        
    int n = 1, fatorial = 1, i=1;;    
    scanf("%d",&n);
    while(n<=0 || n>12){
        scanf("%d",&n);
    }    
    for(n; n>i; n--){
        fatorial = fatorial * n;
    }
    printf("%d\n",fatorial);
    return 0;
}