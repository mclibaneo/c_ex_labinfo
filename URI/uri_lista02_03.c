/*
    Lista de Exercicios 02 URI
    Exercicio 03
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int a,b,c, maior, aux, menor = 0;
    scanf("%d %d %d", &a,&b,&c);
    maior = a;
    aux = b;
    menor = c;
    if(b>a){
        maior = b;
        aux = a;
        if(b>c){
            if(c>a){
                aux = c;
                menor = a;
            }
        }else{
            maior = c;
            aux = b;
            menor = a; 
        }
    }else{
        if(c>b){
            aux = c;
            menor = b;
        }
        if(c>a){
            maior = c;
            aux = a;
            menor = b;
        }
    }
    printf("%d\n",menor);
    printf("%d\n",aux);
    printf("%d\n",maior);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
