#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
{
	int num;
	int i,j;
	int check;

	while(1)
	{	
		check=0;
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d",&num);
		
		if(num<1 ||num>N*N)
		{
			printf("\n�߸��Է��߽��ϴ�. �ٽ� �Է����ּ���.\n\n");
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
				printf("\n�̹� �Է��� �����Դϴ�. �ٽ� �Է��ϼ���.\n\n");
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
		printf("\n��ǻ�Ͱ� �Է��� ���� : %d \n\n",num);
	 	printf("-------------------------\n\n");
		 
	return ;
}
