#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int v[9],i=0;
    FILE *f,*m,*d;
    printf("     SUDOKU    \n \n \n");
    printf("Escolha uma dificuldade:\n facil:1 \n Media: 2 \n Difícil: 3 \n");
    scanf("%i",&n);
    switch(n){
        case(1):
            f=fopen("facil.txt","r");
            while((fscanf(f,"%i",&v[i]))!=EOF){
            for(i=0;i<9;i++){
                printf("%i",v[i]);
            }
            i++;
            }

            break;
        case(2):
            m=fopen("medio.txt","r");
            break;
        case(3):
            d=fopen("dificil.txt","r");
            break;
        default:
            printf("comando invalido");
    }

    return 0;
}
