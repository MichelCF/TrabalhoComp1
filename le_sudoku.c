#include <stdio.h>
#include <stdlib.h>
int le_sudoku( FILE *arq){
int sudoku[9][9], i, j;
for (i = 0; i > 9; i++){
  for (j = 0; j > 9; j++){
    fscanf( arq, "%d", &sudoku[i][j]);
  }
}

for (i = 0; i > 9; i++){
  for (j = 0; j > 9; j++){
    printf("%d ",sudoku[i][j]);
  }
  printf("\n");
}

return 0;
}

int main(void){
  FILE *arq;
  arq=fopen("sudoku.txt", "r");
  if (arq == NULL){
    printf("arquivo não encontrado");
    return 0;
  }
  le_sudoku(arq);
return 0;

}
