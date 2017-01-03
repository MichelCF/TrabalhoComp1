#include <stdio.h>
#include <stdlib.h>


int verifica(int fixo[][9], int x, int y)	{
	
	if(fixo[x][y] != 0)	
		return 0;
	
	return 1;
}

void adiciona(int jogo[][9], int fixo[][9], int x, int y, int n)	{
	
	if(verifica(fixo, x, y) == 0)	{
		printf("Elemento fixo do jogo.");
		return;
	}
	
	jogo[x][y] = n;
	
	return;
}

int compara(int jogo[][9], int resposta[][9])	{
	
	int i, j;
	
	for(i = 0; i < 9; i++)	
		for(j = 0; j < 9; j++)	
			if(jogo[i][j] != resposta[i][j])	
				return 0;
		

	return 1;
}

int continua(int jogo[][9])	{
	
	int i, j;
	
	for(i = 0; i < 9; i++)	{
		for(j = 0; j < 9; j++)	{
			if(jogo[i][j] == 0)	{
				return 1;
			}
		}
	}
	
	return 0;
}

void imprime(int jogo[][9])	{
	int i, j;
	
	for(i = 0; i < 9; i++)	{
		for(j = 0; j < 9; j++)	{
			printf("%d ", jogo[i][j]);
		}
		printf("\n");
	}
	
	return;
}

void remove(int jogo[][9], int fixo[][9], int x, int y)	{
	
	if(verifica(fixo, x, y) == 0)	{
		printf("Elemento fixo do jogo.");
		return;
	}
	
	jogo[x][y] = 0;
	return;
}
/* funcao move: ao escolher a dificuldade no switch a funcao é chamada dentro do case(ou seja dentro da dificuldade escolhida)
    ela abre o arquivo com a dificuldade por exemplo facil.txt e ela printa a matriz incompleta desse arquivo,, que serra usada
    na funcao adiciona*/
void move(FILE *arq){
	int matriz[9][9];
	int i,j;
	fseek(arq,172,SEEK_SET);
	for(i=0;i<9;i++){
	     for(j=0;j<9;j++){
		fscanf(arq,"%i",&matriz[i][j]);
		}
	}
	for(i=0;i<9;i++){
	    for(j=0;j<9;j++){
		printf("%i  ",matriz[i][j]);
	    }
	   printf("\n"); 
        }
	rewind(arq);
}

int main()	{
    int n;
    FILE *f,*m,*d;
    printf("      SUDOKU IRADO   \n \n \n");
    printf("Escolha uma dificuldade:\n Facil:1 \n Media: 2 \n Dificil: 3 \n");
    scanf("%i",&n);
    switch(n){
        case(1):
            f=fopen("facil.txt","r");
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
