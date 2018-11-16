#include "function 1 2.h"

void process_bingo(int bingo[N][N])
{
	int i,j;
	int num;
	int result = -1;
	int check=0;
	
	for(i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			if(bingo[i][j] == num)
			{
				bingo[i][j] = -1;
			}
		}
	} 
	
	return ;
}
