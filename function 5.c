#include "function 1 2.h"

void process_bingo(int bingo[N][N])
{
	int i,j;
	int num;
	
	for(i=0; i<N; i++)
			{
				for(j=0; j<N; j++)
				{
					if(bingo[i][j]==num)
					{
						bingo[i][j]=0; //나와 컴퓨터가 입력한 숫자를 0으로 바꿔준다. 
					}
					
				}
			}	
	return ;
}
	
