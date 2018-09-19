/*
    Lista de Exercicios 03
    Exercicio 08
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    int j = 1, i = 1, linha = 0;    
    scanf("%d", &linha);
    for(i=1; i<=linha; i++){
        for(;;){                               
            if(j%4 == 0){
                printf("PUM\n");
                j++;
                break;
            }else{
                printf("%d ", j++);
            }
        }
        
    }
}