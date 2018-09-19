/*
    Lista de Exercícios 01
    Exercício 09
    Autor: Murilo Carvalho
*/
#include <stdio.h>
#include <math.h>

int main(){
    /*        
       A partir dos dados de entrada dois pontos quaisquer de um plano cartesiano P(X1,Y1)e Q(X2,Y2), 
       elabore um algoritmo que calcule e mostre a distância entre eles. 
       A distância é dada pela fórmula: raiz((X2 - X1) ^ 2 + (Y2 - Y1) ^ 2)
    */   
    int x1=0;
    int y1=0;
    int x2=0;
    int y2=0;
    float distancia = 0.0;
    printf("***** Distancia entre pontos *****");
    printf("\n");
    printf("Informe P(X1) :");    
    scanf("%d",&x1);
    printf("Informe P(Y1) :");
    scanf("%d",&y1);
    printf("P(%d,%d): \n",x1,y1);
    printf("Informe Q(X2) :");    
    scanf("%d",&x2);
    printf("Informe P(Y2) :");
    scanf("%d",&y2);
    printf("Q(%d,%d): \n",x2,y2);
    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distancia entre os pontos P(%d,%d) e Q(%d,%d) = %.2f", x1, y1, x2, y2, distancia);
    return 0;
}
