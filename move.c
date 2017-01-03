#include<stdio.h>
#include<stdlib.h>
int move(FILE *arq){
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

