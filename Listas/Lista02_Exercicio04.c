/*
    Lista de Exercicios 02
    Exercicio 04
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    /*
        Criar um algoritmo que calcule o Salário Líquido, os Descontos e os Acréscimos de um funcionário: 
        Descontos: 
        - IR: para Salário Bruto até R$ 900,00 Isento, de R$ 900,01 até R$ 3.000,00 3%, 
            de R$ 3.000,01 até R$ 4.000,00 5%, acima de R$ 4.000,00 7%. 
        - Faltas: 3 % por falta. 
        - Plano de Saúde: 6 %. 
        Acréscimos: 
        - Abono: 25 % do Salário Bruto + R$ 130,00, o valor do abono não pode ser maior que R$ 1.000,00. 
        - Vale-Alimentação: 12 %. 
        - Salário Família: R$ 25,00 por dependente.
        O Salário Líquido será igual ao Salário Bruto – Descontos + Acréscimos. 
        Salário Bruto, número de faltas e quantidade de dependentes deverão ser lidos. 
        Todas as porcentagens serão calculadas sobre o Salário Bruto. 
        O programa deverá informar o salário bruto, o total dos acréscimos, 
        o total dos descontos e o salário líquido.
    */
    float salarioBruto = 0.0;
    float salarioLiquido = 0.0;
    int qntFaltas = 0;
    int qntDependentes = 0;
    float totalAcrescimos = 0.0;
    float totalDescontos = 0.0;       
    float abono = 0.0;
    float salarioFamilia = 0.0;
    float valeAlimentacao = 0.0;
    float valorIR = 0.0;
    float valorFaltas = 0.0;
    float valorPlanoSaude = 0.0;
    printf("========== Exercicio 4 ==========");
    printf("\n");
    printf("Informe o salario bruto do funcionario:");
    scanf("%f", &salarioBruto);
    printf("Informe a quantidade de dependentes:");
    scanf("%d", &qntDependentes);
    printf("Informe a quantidade de faltas do funcionario:");
    scanf("%d", &qntFaltas);
    //calculando descontos
    if(salarioBruto<=900){
        valorIR = 0.0;
    }else{
        if(salarioBruto<=3000){
            valorIR = salarioBruto*0.03;
        }else{
            if(salarioBruto<=4000){
                valorIR = salarioBruto*0.4;
            }else{
                valorIR = salarioBruto*0.5;
            }
        }
    }
    valorFaltas = qntFaltas*(salarioBruto*0.03);
    valorPlanoSaude = salarioBruto*0.06;

    totalDescontos = valorIR+valorFaltas+valorPlanoSaude;
    
    //Calculando acrescimos
    abono = salarioBruto*0.25 + 130;
     if(abono>1000)
        abono = 1000;
    salarioFamilia = qntDependentes * 25.00;
    valeAlimentacao = salarioBruto*0.12;

    totalAcrescimos = abono+salarioFamilia+valeAlimentacao;

    //Apresentando salario
    salarioLiquido = salarioBruto + totalAcrescimos - totalDescontos;

    printf("========== Salario final do(a) trabalhador(a) ===============  \n");
    printf("Salario Bruto.:   R$%5.2f \n",salarioBruto);
    printf("Total Acrescimos: R$%5.2f \n", totalAcrescimos);
    printf("Total Descontos:  R$%5.2f \n", totalDescontos);
    printf("Salario Liquido:  R$%5.2f", salarioLiquido);
}