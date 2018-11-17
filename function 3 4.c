#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
{
	int num;
	int i,j;

 // 내 숫자 중복잡기 & 내 숫자 != 컴퓨터 숫자 되게하는거 만들깅.... 
	while(1)
	{
		printf("숫자를 입력하세요 : ");
		scanf("%d",&num);
		
		if(num>=1 && num<=N*N)
		{
			for(i=0; i<N; i++)
			{
				for(j=0; j<N; j++)
				{
					if(bingo[i][j]==num)
					{
						bingo[i][j];
					}
				}
			}break;
		 } 
		 else 
		 {
		 	printf("\n잘못입력했습니다. 다시 입력하세요.\n\n");
		 }
		 
	}
	return ; 
}

void get_number_byCom(int bingo[N][N])
{
	int num;
	int i,j;
	int jungbok[N*N]; //중복을 받아줄 배열 
	int nansu; // 난수를 받아줄 변수 
		
	for(i=0; i<N*N; i++) //jungbok을 0으로 초기화 
	{
		jungbok[i]=0;
	}
		
	while (1)
	{
		num= rand()%(N*N)+1;
				
			if (jungbok[nansu-1] == 0)
			{
				bingo[i][j] = nansu;
				jungbok[nansu-1] = 1; //nansu를 사용했다고 표시 
							
					for(i=0; i<N; i++)
					{
						for(j=0; j<N; j++)
						{
							if(bingo[i][j]==num)
							{
								bingo[i][j];
							}
						}
					}break;
			}
	}printf("\n컴퓨터가 입력한 숫자 : %d \n\n",num);
	 printf("-------------------------\n\n");
		 
	return ;
}
