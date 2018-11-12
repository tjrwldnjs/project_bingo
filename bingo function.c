#include <stdlib.h>
#define N 5

void initiate_bingo(int bingo[N][N])
	{	
		
		int i=0; 
		int j=0;
		int baeyeol[100]; // 넉넉하게 100까지 잡아준다. 
		int nansu;  
		srand((unsigned)time(NULL));
		
		for (i=0; i<N; i++) //bingo판을 0으로 초기화 
		{
			for (j=0; j<N; j++)
		
				 bingo[i][j]=0;
		} 
		
		for(i=0; i<100; i++) //baeyeol을 0으로 초기화 
	
			baeyeol[i]=0;
		
		for (i=0; i<N; i++) //1~N*N까지 난수 발생 
		{
			for (j=0; j<N; j++)
			{
				while(1) // (1)은 참이라는 뜻 
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
