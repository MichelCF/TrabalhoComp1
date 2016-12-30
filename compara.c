int compara(int jogo[][], int resposta[][])	{
	
	int i, j;
	
	for(i = 0; i < 9; i++)	{
		for(j = 0; j < 9; j++)	{
			if(jogo[i][j] != resposta[i][j])	{
				return 0;
			}
		}
	}
	
	return 1;
}
