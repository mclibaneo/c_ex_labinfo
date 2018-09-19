/*
    Lista de Exercicios 03
    Exercicio 10
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){        
    int n=0, i=0, ant=0, pos=1, aux=0;    
    scanf("%d",&n);
    while(n<=0 || n>45){
        scanf("%d",&n);
    }    
    for(i; i<n; i++){
        if (i==0) {
            printf("%d ",i);
        }else{
            if(i==1){
                printf("%d ",i);
            }else{
                aux = ant+pos;
                ant = pos;
                pos = aux;
                if(i==n-1) printf("%d\n",aux);
                else printf("%d ",aux);

            }
        }
    }   
    return 0;
}