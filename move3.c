#include<stdio.h>
#include<stdlib.h>
int move(FILE *arq){
	int incompleta[9][9];
	int completa[9][9];
	int i,j;
	for(i=0;i<9;i++){
	   for(j=0;j<9;j++){
		fscanf(arq,"%i",&completa[i][j]);
	   }
       }
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
	
}

