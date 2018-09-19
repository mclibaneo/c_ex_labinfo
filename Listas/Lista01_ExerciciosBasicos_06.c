/*
    Lista de Exercícios 01
    Exercício 06
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    /*        
        Elabore um algoritmo que calcule o preço de venda de um carro. 
        O preço de venda é formado pelo preço da montadora, 
        mais 15% de lucro, mais 11% de IPI, mais 17% de ICM. 
        As porcentagens são sobre o preço da montadora, que é lido. 
        Apresente na tela o preço final e o valor dos impostos.
    */    
    float precoMontadora = 0.0;
    float valorImpostos = 0.0;    
    float valorVendaCarro = 0.0;
    printf("***** Preco de Venda de Carro (R$) *****");
    printf("\n");
    printf("Informe o preco de custo da montadora:");
    scanf("%f",&precoMontadora);
    valorImpostos = precoMontadora*0.11;
    valorImpostos += precoMontadora*0.17;   
    valorVendaCarro = precoMontadora + (precoMontadora*0.15) + valorImpostos;
    printf("========== Valor final do Carro ===============  \n");
    printf("Preco da Montadora.:           R$%.2f \n",precoMontadora);
    printf("IPI:                           R$%.2f \n", precoMontadora*0.11);
    printf("ICM:                           R$%.2f \n", precoMontadora*0.17);    
    printf("Valor total dos impostos:      R$%.2f \n", valorImpostos);    
    printf("Valor de venda final do carro: R$%.2f", valorVendaCarro);
    return 0;
}
