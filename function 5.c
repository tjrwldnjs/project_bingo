#include "function 1 2.h"

void process_bingo(int bingo[N][N])
{
	int number;
	int i,j;
	
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if (bingo[i][j]==number)
			{
				bingo[i][j] = 0;
			}
		}
	}
	
	return ;
}
