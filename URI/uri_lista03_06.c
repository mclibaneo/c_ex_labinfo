/*
    Lista de Exercicios 03
    Exercicio 06
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int m = 1, n = 1;   
    while(1){
        scanf("%d %d", &m, &n);
        if (m<=0 || n<=0) break;
        int soma = 0;
        if(m>n){
            for(n;n<=m;n++){
                printf("%d ",n);
                soma+=n;
            }
            printf("Sum=%d\n",soma);
        }else{
            for(m;m<=n;m++){
                printf("%d ",m);
                soma+=m;
            }
            printf("Sum=%d\n",soma);
        }
    }    
    return 0;
}