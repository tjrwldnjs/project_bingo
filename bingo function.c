#include "bingo.h"

#define N 5

void initiate_bingo()
{	
	
	int bingo[N][N];
	int my_bingo[N][N]; //�� ���� �迭 
	int com_bingo[N][N]; //��ǻ���� ���� �迭 
	int i,j;
	int jungbok[N*N]; //�ߺ��� �޾��� �迭 
	int nansu; //������ �޾��� ���� 
	
	srand((unsigned)time(NULL));
	
	for(i=0; i<N; i++) //�������ʱ�ȭ 
	{
		for(j=0; j<N; j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0; i<N*N; i++) //jungbok�� 0���� �ʱ�ȭ 
		jungbok[i]=0;
		
		
		
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			{
				while (1)
				{
					jungbok[N*N]=0;
					nansu= rand()%(N*N)+1;
					
					if (jungbok[nansu-1]==0)
					{
						bingo[i][j] = nansu;
						jungbok[nansu-1] = 1;
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
			printf("%4u ",bingo[i][j]);
		}
		printf("\n");
	}printf("\n");
}



