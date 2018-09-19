/*
    Lista de Exercícios 01
    Exercício 08
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    /*        
        Elabore um algoritmo que calcule e 
        apresente a quantidade de galões cheios de 5 litros de combustível necessário em uma viagem. 
        Sabe-se que um automóvel faz 12Km/l. 
        O usuário fornecerá o tempo gasto e a velocidade média na viagem.
    */   
    int qntdGaloes = 0; 
    float tempoViagem = 0.0;
    float velocidadeViagem = 0.0; 
    float distanciaViagem = 0.0;      
    printf("***** Quantidade de Galoes para Viagem *****");
    printf("\n");
    printf("Por favor, informe o tempo gasto na viagem (horas):");
    scanf("%f",&tempoViagem);
    printf("Agora informa a velocidade media do veiculo (km/h):");
    scanf("%f",&velocidadeViagem);
    distanciaViagem = tempoViagem * velocidadeViagem;
    //consumo = distanciaViagem/12;
    qntdGaloes = (distanciaViagem/12)/5;    
    printf("Quantidade de galoes cheios de 5L necessarios: %d", qntdGaloes);
    return 0;
}
