void adiciona(int jogo[][], int fixo[][] int x, int y, int n)	{
	
	if(verifica(fixo, x, y) == 0)	{
		printf("Elemento fixo do jogo.")
		return;
	}
	
	jogo[x][y] = n;
	
	return;
}
