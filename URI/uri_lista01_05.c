/*
    Lista de Exercicios 01 URI
    Exercicio 05
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
   int velocidade = 0;
   int tempo = 0;
   double gasto = 0.0;
   scanf("%d",&tempo);
   scanf("%d",&velocidade);
   gasto = (tempo*velocidade) / 12.0;
   printf("%.3lf\n", gasto);
   return 0;
}