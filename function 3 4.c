#include "function 3 4.h"

void get_number_byMe(int bingo[N][N])
{
	int num;
	int i,j;
	int jungbok[N*N]; //�ߺ��� �޾��� �迭 
	int nansu; // ������ �޾��� ���� 
		
	for(i=0; i<N*N; i++) //jungbok�� 0���� �ʱ�ȭ 
	{
		jungbok[i]=0;
	}
	while (1)
		{
				if (jungbok[nansu-1] == 0)
				{
					bingo[i][j] = nansu;
					jungbok[nansu-1] = 1; //nansu�� ����ߴٰ� ǥ�� 
					break;
				}
		} //���� �Է��� ���� �ߺ��� ���ϱ� ���� �ۼ��� �ڵ� 
	
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
	int jungbok[N*N]; //�ߺ��� �޾��� �迭 
	int nansu; // ������ �޾��� ���� 
		
	for(i=0; i<N*N; i++) //jungbok�� 0���� �ʱ�ȭ 
	{
		jungbok[i]=0;
	}
		
	while (1)
		{
			num= rand()%(N*N)+1;
					
				if (jungbok[nansu-1] == 0)
				{
					bingo[i][j] = nansu;
					jungbok[nansu-1] = 1; //nansu�� ����ߴٰ� ǥ�� 
					break;
				}
				
		}printf("��ǻ�Ͱ� �Է��� ���� : %d ",num);
	return ;
}
