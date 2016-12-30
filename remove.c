int remove(int jogo[][], int fixo[][] int x, int y)	{
	
	if(verifica(fixo, x, y) == 0)	{
		printf("Elemento fixo do jogo.")
		return;
	}
	
	jogo[x][y] = 0;
	return;
}
