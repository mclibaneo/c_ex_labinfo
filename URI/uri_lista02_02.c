/*
    Lista de Exercicios 02 URI
    Exercicio 02
    Aluno: Murilo Carvalho
*/
#include <stdio.h>
int main(){
    float n1,n2,n3,n4,nE,media = 0.0;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (2*n1+3*n2+4*n3+1*n4)/10;
    printf("Media: %.1f\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }else{
        if(media<5.0){
            printf("Aluno reprovado.\n");
        }else{
            printf("Aluno em exame.\n");
            scanf("%f",&nE);
            printf("Nota do exame: %.1f\n",nE);
            media = (media+nE)/2;
            if(media>=5.0)
                printf("Aluno aprovado.\n");
            else    
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }    
   return 0;
}