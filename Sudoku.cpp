#include <stdio.h>
#include <stdlib.h>

int jogog[9][9], respostag[9][9], fixog[9][9];

void adiciona(int jogo[][9], int x, int y, int n)	{
	
	if(fixog[x][y] != 0)	{
		printf("Elemento fixo do jogo, escolha novos x, y e valor.");
		scanf("%d%d%d", &x, &y, &n);
		return adiciona(jogo, x, y, n);
	}
	
	jogo[x][y] = n;
	
	return;
}

void remove(int jogo[][9], int x, int y)	{
	
	if(fixog[x][y] != 0)	{
		printf("Elemento fixo do jogo, escolha novo x e y.");
		scanf("%d%d", &x, &y);
		return remove(jogo, x, y);
	}
	
	jogo[x][y] = 0;
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

void move(FILE *arq){
	int i,j;
	
	for(i=0;i<9;i++)
	   for(j=0;j<9;j++)
			fscanf(arq,"%i", &respostag[i][j]);
	   
       
	for(i=0;i<9;i++)
	    for(j=0;j<9;j++)	{
			fscanf(arq,"%i", &jogog[i][j]);
			fixog[i][j] = jogog[i][j];
		}
		
	

	rewind(arq);
	
}

int main(){
	FILE *f,*m,*d;
	int n, escolha, x, y, z;
	printf("Digite a dificuldade:\n 1:Para facil \n 2:Para medio \n 3:Para dificil \n");
	scanf("%i",&n);
	switch(n){
		case 1:
		 f=fopen("facil.txt","r");
		 move(f);
		 break;
		case 2:
		 m=fopen("medio.txt","r");
		 move(m);
		 break;
		case 3:
		 d=fopen("dificil.txt","r");
		 move(d);
		 break;
		default:
		   printf("numero invalido");	   
	}
	
	while(1)	{
		imprime(jogog);
		printf("Gostaria de 1-Adicionar  2-Remover um numero\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)	{
			printf("Adicionar em qual posicao?\n");
			printf("Entre x, y e um numero entre 1 e 9: ");
			scanf("%d%d%d", &x, &y, &z);
			adiciona(jogog, x, y, z);
		}
		
		if(escolha == 2)	{
			printf("Remover em qual posicao?\n");
			printf("Entre x e y: ");
			scanf("%d%d", &x, &y);
			remove(jogog, x, y);
		}
		
		if(continua(jogog) == 0)	{
			if(compara(jogog, respostag) == 1)	{
				printf("Parabens, voce venceu!\n");
				return 0;
			}
			printf("Voce perdeu o jogo!\n");
			return 0;
		}
		
	}
	
	return 0;
}
