#include <stdio.h>
#include <math.h>

int main(){
    float a = 0.0;
    float b = 0.0;

    printf("***** Calculo de dois numeros *****");
    printf("\n");
    printf("Digite o primeiro numero:");

    scanf("%f", &a);
    printf("Digite o segundo numero:");
    scanf("%f", &b);

    printf("\n");

    //adicao
    printf("Resultado = %.1f + %.1f = %.1f \n",a,b,a+b);
    //subtracao
    printf("Resultado = %.1f - %.1f = %.1f \n",a,b,a-b);
    //multiplicacao
    printf("Resultado = %.1f * %.1f = %.1f \n",a,b,a*b);
    //divisao
    printf("Resultado = %.1f / %.1f = %.1f \n",a,b,a/b);
    //resto da divisao
    printf("Resultado = %.1f / %.1f = %.1f \n",a,b,fmod(a,b));


    return 0;
}
