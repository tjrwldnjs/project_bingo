#include "function 1 2.h"

void count_bingo(int bingo[N][N])
{
	int countBingo=0; //전체 빙고 수 
	int cross1=0; //대각선빙고1 
	int cross2=0; //대각선빙고2 
	int i,j;

	while(countBingo==M)
	{
	for(i=0; i<N; i++)
	{
		int ROWS=0; // 가로빙고 
		int COLS=0; // 세로빙고 
	
		for(j=0; j<N; j++)
		{
			if(bingo[i][j]==0)
			{
				ROWS++;	
			}
			if(bingo[j][i]==0)
			{
				COLS++;
			}
			if(i==j && bingo[i][j]==0)
			{
				cross1++;
			}
			if((i+j==N-1) && bingo[i][j]==0)
			{
				cross2++;
			}
		}
			if(ROWS==N)
			{
				countBingo++;
			}
			if(COLS==N)
			{
				countBingo++;
			}
	}
	
	if(cross1==N)
	{
		countBingo++;
	} 
	if(cross2==N)
	{
		countBingo++;
	}
}	printf("%d 빙고입니다.\n",countBingo);
	return ;
}
