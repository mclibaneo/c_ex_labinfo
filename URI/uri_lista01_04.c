/*
    Lista de Exercicios 01 URI
    Exercicio 04
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
   int codigoA = 0;
   int qntA = 0;
   float valorA = 0.0;
   int codigoB = 0;
   int qntB = 0;
   float valorB = 0.0;
   float totalA = 0.0;
   float totalB = 0.0;
   scanf("%d %d %f",&codigoA, &qntA, &valorA);
   totalA = qntA*valorA;
   scanf("%d %d %f",&codigoB, &qntB, &valorB);
   totalB = qntB*valorB;
   printf("VALOR A PAGAR: R$ %.2f\n", totalA+totalB);
   return 0;
}