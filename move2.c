#include<stdio.h>
#include<stdlib.h>
int move(FILE *arq){
	int incompleta[9][9];
	int completa[9][9];
	int i,j;
	fseek(arq,163,SEEK_SET);
	for(i=0;i<9;i++){
	     for(j=0;j<9;j++){
		fscanf(arq,"%i",&incompleta[i][j]);
		}
	}
	for(i=0;i<9;i++){
	    for(j=0;j<9;j++){
		printf("%i  ",incompleta[i][j]);
	    }
	   printf("\n"); 
        }
	printf("\n \n");
	rewind(arq);
	for(i=0;i<9;i++){
	   for(j=0;j<9;j++){
		fscanf(arq,"%i",&completa[i][j]);
	   }
       }
	for(i=0;i<9;i++){
	   for(j=0;j<9;j++){
		printf("%i  ",completa[i][j]);
	    }
          printf("\n");
	}
	
}
int main(){
	FILE *f,*m,*d;
	int n;
	printf("digite a dificuldade:\n 1:para facil \n 2:para medio \n 3:para dificil ");
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
	return 0;
}
