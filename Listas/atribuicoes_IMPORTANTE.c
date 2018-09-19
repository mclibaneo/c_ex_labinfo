#include <stdio.h>

int main(){
    int x=11;
    int y=2;

    float a = 11.0;
    float b = 2.0;

    int resultadoInt=(x/y);
    float resultadoFloat=(a/b);
    float resultadoFloatInt=(x/y);

    printf("Resultado por Int = %d \n",resultadoInt); //imprime 5, pois considera apenas o valor inteiro da divisao
    printf("Resultado por Float = %f \n",resultadoFloat); //imprime 5.500000 (padrao de 6 casas)
    printf("Resultado de Int por Float = %f \n",resultadoFloatInt); //imprime 5.00000, toda divisao de inteiro retorna inteiro

    return 0;
}
