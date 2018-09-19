/*
    Lista de Exercicios 03
    Exercicio 05
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){    
    int cont = 0, i = 0;
    float numero = 0.0;
    for(i;i<6;i++){
        scanf("%f",&numero);
        if(numero>0) cont++;
    }
    printf("%d valores positivos\n",cont);
    return 0;
}