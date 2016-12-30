#include<stdio.h>

int main(void){
    int i, j;

    printf(" __ __ __  __ __ __  __ __ __\n");

    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            if (j == 3 || j == 6){
                printf("||__");
            }
            else{
                printf("|__");
            }
        }
        printf("|");
        printf("\n");

        if (i == 2 || i == 5){
            printf(" __ __ __  __ __ __  __ __ __\n");
        }
    }
}
