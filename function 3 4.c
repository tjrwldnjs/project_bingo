#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
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
				if (jungbok[nansu-1] == 0)
				{
					bingo[i][j] = nansu;
					jungbok[nansu-1] = 1; //nansu를 사용했다고 표시 
					break;
				}
		} //내가 입력한 수의 중복을 피하기 위해 작성한 코드 
	
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
						bingo[i][j]=0;
						
					}
				}
			}break;
		 } 
		 else 
		 {
		 	printf("잘못 입력했습니다. 다시 입력하세요.\n");
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
					break;
				}
				
		}printf("컴퓨터가 입력한 숫자 : %d ",num);
	return ;
}
