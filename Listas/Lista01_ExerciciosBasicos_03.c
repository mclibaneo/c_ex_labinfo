/*
    Lista de Exercícios 01
    Exercício 03
    Autor: Murilo Carvalho
*/
#include <stdio.h>

int main(){
    // tanque = cilindro de area = 2*pi*r*(altura+raio)
    // 1 lata possui 5 litros
    // 1 litro pinta 3 metros quadrados
    float const pi = 3.14;
    float alturaTanque = 0.0;
    float raioTanque = 0.0;
    float areaTanque = 0.0;
    float litrosTinta = 0.0;
    float precoLata = 0.0;
    float custoTotal = 0.0;
    int qntdLata = 0;
    printf("***** Vamos pintar um tanque? *****");
    printf("\n");
    printf("Informe a altura do tanque (m):");
    scanf("%f",&alturaTanque);
    printf("Agora informe o raio do tanque (m):");
    scanf("%f",&raioTanque);
    areaTanque = 2*pi*raioTanque*(alturaTanque+raioTanque);
    litrosTinta = areaTanque/3;
    qntdLata = (litrosTinta/5)+1; //add 1 lata devido ao arredondamento para inteiro
    printf("Sera necessario %d latas de tinta, inform o preco da lata (R$):", qntdLata);
    scanf("%f",&precoLata);
    custoTotal = qntdLata*precoLata;
    printf("O tanque possui %.2f m², e sera necessario %d latas ao custo total de R$%.2f", 
            areaTanque, qntdLata, custoTotal);
    return 0;
}
