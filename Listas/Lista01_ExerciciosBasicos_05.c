/*
    Lista de Exercícios 01
    Exercício 05
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    /*        
    Elabore um algoritmo que calcule e apresente o valor do salário família de um funcionário, 
    que é de 2% do salário por dependente. O salário e o número de dependentes serão lidos.
    */    
    float salario = 0.0;
    int qntdDependentes = 0;    
    printf("***** Folha de Pagamento Salario Familia *****");
    printf("\n");
    printf("Por favor, o salario do(a) funcionario(a):");
    scanf("%f",&salario);
    printf("Agora informe a quantidade de dependentes:");
    scanf("%d",&qntdDependentes);
    printf("========== Salario final do(a) trabalhador(a) ===============  \n");
    printf("Salario.: R$%.2f \n",salario);
    printf("Quantidade de Dependentes: %d \n", qntdDependentes);
    printf("Salario Familia: R$%.2f", salario+(qntdDependentes*0.02*salario));    
    return 0;
}
