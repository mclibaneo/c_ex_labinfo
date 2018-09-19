/*
    Lista de Exercícios 01
    Exercício 04
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    /*        
    Elabore um algoritmo para calcular o salário final de um trabalhador, 
        recebendo a quantidade de horas trabalhadas, a quantidade de horas extras,
        quantidade de horas ausentes e o valor do salário mínimo, sabendo que:
    a) as horas trabalhadas e ausentes valem 4% do salário mínimo;
    b) as horas extras valem 50% a mais do que as horas trabalhadas;
    c) o salário final é igual a soma das horas trabalhadas com as hora extras, 
        descontadas as horas ausentes e 11% de INSS.
    */    
    float salarioFinal = 0.0;
    int qntdHorasTrabalhadas = 0;
    int qntdHorasExtras = 0;
    int qntdHorasAusentes = 0;
    float salarioMinimo = 0.0;
    float valorHorasTrabalhadas = 0.0;
    float valorHorasExtras = 0.0;
    float valorHorasAusentes = 0.0;
    float valorINSS = 0.0;
    printf("***** Folha de Pagamento *****");
    printf("\n");
    printf("Por favor, informe o valor atual do salario minimo:");
    scanf("%f",&salarioMinimo);
    printf("Informe a quantidade de horas trabalhadas:");
    scanf("%d",&qntdHorasTrabalhadas);
    valorHorasTrabalhadas = salarioMinimo*0.04*qntdHorasTrabalhadas;
    printf("Informe a quantidade de horas extras:");
    scanf("%d",&qntdHorasExtras);
    valorHorasExtras = qntdHorasExtras*(salarioMinimo*0.04*1.5);
    printf("Informe a quantidade de horas ausentes:");
    scanf("%d",&qntdHorasAusentes);
    valorHorasAusentes = salarioMinimo*0.04*qntdHorasAusentes;    
    valorINSS = salarioMinimo*0.11;
    salarioFinal = valorHorasTrabalhadas + valorHorasExtras - valorHorasAusentes - valorINSS;
    printf("========== Salario final do(a) trabalhador(a) ===============  \n");
    printf("Salario Minimo.: R$%.2f \n",salarioMinimo);
    printf("Quantidade de Horas Trabalhadas | Valor: %5d | R$%5.2f \n", qntdHorasTrabalhadas, valorHorasTrabalhadas);
    printf("Quantidade de Horas Extras | Valor:      %5d | R$%5.2f \n", qntdHorasExtras, valorHorasExtras);
    printf("Quantidade de Horas Ausentes | Valor:    %5d | R$%5.2f \n", qntdHorasAusentes, valorHorasAusentes);
    printf("11% INSS: R$%5.2f \n", valorINSS);
    printf("Salario Final: R$%5.2f", salarioFinal);    
    return 0;
}
