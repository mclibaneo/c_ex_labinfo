/*
    Lista de Exercicios 02
    Exercicio 03
    Aluno: Murilo Carvalho
*/

#include <stdio.h>

int main(){
    /*
        Faça uma programa que leia 3 valores A, B e C e 
        verifique se esses valores representam os lados de um triângulo. 
        Para que seja um triângulo, todos os lados devem ser maiores que zero 
        e nenhum lado deve ser igual ou maior que a soma dos outros dois lados. 
        Informe também o tipo do triângulo: 
            Escaleno: todos os lados diferentes. 
            Isósceles: 2 lados iguais. 
            Equilátero: todos os lados iguais.
    */
    int a,b,c;
    a = 0;
    b = 0;
    c = 0;
    printf("========== Exercicio 3 ==========");
    printf("\n");
    printf("Digite o lado A do triangulo: A = ");
    scanf("%d", &a);
    printf("Digite o lado B do triangulo: B = ");
    scanf("%d", &b);
    printf("Digite o lado C do triangulo: C = ");
    scanf("%d", &c);
    if(a==0 || b==0 || c==0){
        printf("Nao eh triangulo!");
    }else{
        if(a>=b+c || b>=a+c || c>=a+b ){
            printf("nao eh triangulo!");
        }else{
            if(a==b && b==c){
                printf("Triangulo equilatero de lados A, B, C = %d, %d, %d", a,b,c);
            }else{
                if(a!=b && c!=b){
                    printf("Triangulo escaleno de lados A, B, C = %d, %d, %d", a,b,c);
                }else{
                    printf("Triangulo isosceles de lados A, B, C = %d, %d, %d", a,b,c);
                }
            }
        }
        
    }
}