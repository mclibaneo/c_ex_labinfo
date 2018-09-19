/*
    Lista de Exercicios 01 URI
    Exercicio 01
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
   double const pi = 3.14159;
   double r = 0.0;
   double area = 0.0;
   scanf("%lf", &r);
   area = pi * r*r;
   printf("A=%.4lf\n",area);
   return 0;
}