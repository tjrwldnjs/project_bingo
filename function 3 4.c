#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
{
	int num;
	int i,j;
	int check;

	while(1)
	{	
		check=0;
		printf("숫자를 입력하세요 : ");
		scanf("%d",&num);
		
		if(num<1 ||num>N*N)
		{
			printf("\n잘못입력했습니다. 다시 입력해주세요.\n\n");
		}
		else
		{
			for(i=0; i<N; i++)
			{
				for(j=0; j<N; j++)
				{
					if(bingo[i][j]==num)
					{
						bingo[i][j];
						check=num;
					}
				}
			}
			if(check) 
			break;
			
			else
			{
				printf("\n이미 입력한 숫자입니다. 다시 입력하세요.\n\n");
			}
		}
		 
	}
	return ; 
}

void get_number_byCom(int bingo[N][N])
{
	int num;
	int i,j;
	int check; 
		
	while (1)
	{	
		check=0;
		num= rand()%(N*N)+1;
						
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				if(bingo[i][j]==num)
				{
					bingo[i][j];
					check=num;
				}
			}
		}
		if(check)
		break;		
	}
		printf("\n컴퓨터가 입력한 숫자 : %d \n\n",num);
	 	printf("-------------------------\n\n");
		 
	return ;
}
