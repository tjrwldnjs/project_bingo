#include "function 1 2.h"

void count_bingo(int bingo[N][N])
{
	int countBingo=0; //��ü ���� �� 
	int cross1=0; //�밢������1 
	int cross2=0; //�밢������2 
	int i,j;

	while(countBingo==M)
	{
	for(i=0; i<N; i++)
	{
		int ROWS=0; // ���κ��� 
		int COLS=0; // ���κ��� 
	
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
}	printf("%d �����Դϴ�.\n",countBingo);
	return ;
}
