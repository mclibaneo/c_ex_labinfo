    /*
        Lista de Exercicios 02
        Exercicio 07
        Aluno: Murilo Carvalho
    */
    #include <stdio.h>
    #include <conio.h>
    int main(){
        /*
            Escreva um algoritmo em pseudocódigo usando a seleção de múltipla escolha para ler uma letra 
            indicando o nome de uma nota musical e escreva o nome correspondente da mesma. 
            Se uma nota inválida for informada então escreva uma mensagem informando o ocorrido. 
            Pesquise as letras - notas musicais básicas. Exemplo: “A” - Nota Lá. “H”: Nota Inválida.
            C (do) D (re) E (mi) F(fa) G(sol) A(la) B(si)
        */
        char opcao;
        printf("========== Exercicio 7 ==========");
        printf("\n");
        printf("Informe a letra da nota musical:\n");
        opcao = getch();
        switch(opcao){
            case 'c':
                printf("C - Nota Do");
            break;
            case 'd':
                printf("D - Nota Re");
            break;
            case 'e':
                printf("E - Nota Mi");
            break;
            case 'f':
                printf("F - Nota Fa");
            break;
            case 'g':
                printf("G - Nota Sol");
            break;
            case 'a':
                printf("A - Nota La");
            break;
            case 'b':
                printf("B - Nota Si");
            break;
            default:
                printf("%c: Nota Inválida", opcao);
            break;
        }
    }