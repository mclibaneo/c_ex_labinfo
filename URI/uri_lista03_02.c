/*
    Lista de Exercicios 03
    Exercicio 03
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int x = 1, y = 0, soma = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        y++;
        for(y;y<x;y++){  
            if (y%2!=0) soma = soma + y;
        }        
    }else{
        if(x<y){
            x++;
            for(x;x<y;x++){
                if (x%2!=0) soma = soma + x;
            }            
        }    
    }    
    printf("%d\n",soma);
    return 0;
}