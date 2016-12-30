#include <stdio.h>
#include <stdlib.h>
// inicio da função principal, com abertura dos arquivos que serão separados,
  //  pelo nivel de dificuldade 
int dificuldade()
{
    int n;
    FILE *dificuldade;
    printf("     SUDOKU    \n \n \n");
    printf("Escolha uma dificuldade:\n Facil:1 \n Media: 2 \n Difícil: 3 \n");
    scanf("%i",&n);
    switch(n){
        case(1):
            dificuldade=fopen("facil.txt","r");
            break;
        case(2):
            dificuldade=fopen("medio.txt","r");
            break;
        case(3):
            dificuldade=fopen("dificil.txt","r");
            break;
        default:
            printf("comando invalido");
    }

    return dificuldade;
}

void main(void){
  dificuldade();
}
