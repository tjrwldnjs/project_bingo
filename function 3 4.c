#include "function 3 4.h"

void get_number_byMe(int bingo[N][N]) //�� ���� �ߺ���� 
{
	int num;
	int i,j;

	while(1)
	{
		printf("���ڸ� �Է��ϼ��� : ");
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
		 	printf("\n�߸��Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
		 }
		 
	}
	return ; 
}

void get_number_byCom(int bingo[N][N]) //�ļ��� �ߺ���� 
{
	int num;
	int i,j;
		
	while (1)
	{
		num= rand()%(N*N)+1;
						
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
		printf("\n��ǻ�Ͱ� �Է��� ���� : %d \n\n",num);
	 	printf("-------------------------\n\n");
		 
	return ;
}
