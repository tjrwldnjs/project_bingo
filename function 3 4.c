#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
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
						bingo[i][j]=0;
						
					}
				}
			}break;
		 } 
		 else 
		 {
		 	printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
		 }
	}
	return ; 
}

void get_number_byCom(int bingo[N][N])
{
	int num;
	int i,j;
	
	srand((unsigned)time(NULL)); 
	
	num = rand()%N*N+1;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i][j]==num)
			{
				bingo[i][j]=0;
			}
		}
	} printf("��ǻ�Ͱ� �Է��� ���� : %d ",num);
	return ;
}
