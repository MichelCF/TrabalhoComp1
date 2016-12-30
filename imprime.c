void imprime(int jogo[][])	{
	int i, j;
	
	for(i = 0; i < 9; i++)	{
		for(j = 0; j < 9; j++)	{
			printf("%d ", jogo[i][j]);
		}
		printf("\n");
	}
	
	return;
}
