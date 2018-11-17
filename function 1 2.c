#include "function 1 2.h"

#define N 5
#define M 3

void initiate_bingo(int bingo[N][N])
{	
	
	int i,j;
	int jungbok[N*N]; //중복을 받아줄 배열 
	int nansu; //난수를 받아줄 변수 
	

	for(i=0; i<N; i++) //빙고판초기화 
	{
		for(j=0; j<N; j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0; i<N*N; i++) //jungbok을 0으로 초기화 
	{
		jungbok[i]=0;
	}	
			
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			{
				while (1)
				{
					nansu= rand()%(N*N)+1;
					
					if (jungbok[nansu-1] == 0)
					{
						bingo[i][j] = nansu;
						jungbok[nansu-1] = 1; //nansu를 사용했다고 표시 
						break;
					}
				}
			}
	
	}	return ;
}
		

void print_bingo(int bingo_p[N][N])
{
	
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			printf("%4u ",bingo_p[i][j]);
		}
		printf("\n");
	}printf("\n");
}


