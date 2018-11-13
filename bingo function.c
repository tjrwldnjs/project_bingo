#include "bingo.h"

#define N 5

void initiate_bingo()
{	
	
	int bingo[N][N];
	int i,j;
	int baeyeol[N*N];
	int nansu;
	
	srand((unsigned)time(NULL));
	
	for(i=0; i<N; i++) //빙고판초기화 
	{
		for(j=0; j<N; j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0; i<N; i++) //baeyeol을 0으로 초기화 
		baeyeol[i]=0;
		
		
		
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			{
				while (1)
				{
					baeyeol[N*N]=0;
					nansu= rand()%(N*N)+1;
					
					if (baeyeol[nansu]==0)
					{
						bingo[i][j]=nansu;
						baeyeol[nansu]=1;
						break;
					}
				}
			}
	
	}	return ;
}
		

void print_bingo(int bingo[N][N])
{
	
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			printf("%d ",bingo[i][j]);
		}
		printf("\n");
	}
}



