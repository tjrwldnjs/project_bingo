#include <stdlib.h>
#define N 5

void initiate_bingo(int bingo[N][N])
	{	
		
		int i=0; 
		int j=0;
		int baeyeol[100]; // �˳��ϰ� 100���� ����ش�. 
		int nansu;  
		srand((unsigned)time(NULL));
		
		for (i=0; i<N; i++) //bingo���� 0���� �ʱ�ȭ 
		{
			for (j=0; j<N; j++)
		
				 bingo[i][j]=0;
		} 
		
		for(i=0; i<100; i++) //baeyeol�� 0���� �ʱ�ȭ 
	
			baeyeol[i]=0;
		
		for (i=0; i<N; i++) //1~N*N���� ���� �߻� 
		{
			for (j=0; j<N; j++)
			{
				while(1) // (1)�� ���̶�� �� 
				{
					nansu = rand()%N*N+1;
					if  (baeyeol[nansu]==0)
					{
						bingo[i][j] = nansu;
						baeyeol[nansu] = 1;
						break;
					 } 
				}
			}
		}
		return 0;
	};
