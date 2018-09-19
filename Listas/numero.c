#include <stdio.h>

int main(){
    int numeroA = 0; // para evitar que a variavel obtenha um valor desconhecido
    int numeroB = 0;
    printf("Qual o numero A:");
    scanf("%d", &numeroA);
    printf("Qual o numero B:");
    scanf("%d", &numeroB); // se omitir valor, o sistema ira imprimir um valor salvo anteriormente na memoria
    printf("A soma eh: a + b = %d", numeroA+numeroB);
    return 0;
}
