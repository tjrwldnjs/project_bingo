#include "function 1 2.h"

#define N 5
#define M 3

void initiate_bingo(int bingo[N][N])
{	
	
	int i,j;
	int jungbok[N*N]; //�ߺ��� �޾��� �迭 
	int nansu; //������ �޾��� ���� 
	

	for(i=0; i<N; i++) //�������ʱ�ȭ 
	{
		for(j=0; j<N; j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0; i<N*N; i++) //jungbok�� 0���� �ʱ�ȭ 
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
						jungbok[nansu-1] = 1; //nansu�� ����ߴٰ� ǥ�� 
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


