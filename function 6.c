#include "function 1 2.h"

int count_bingo(int bingo[N][N])
{
	int i,j;
	int sum; // �Է¹��� ���ڸ� 0���� �ٲٱ� ������ 0���� ���� 0�ΰ��� �̿��Ͽ� ���� ����. 
	int count=0; //���� ���� ���� 
	
	for(i=0; i<N; i++) //���� ���� ����. 
	{
		sum=0;
	
		for(j=0; j<N; j++)
		{
			sum += bingo[i][j];
		}
		if(sum==0)
		{
			count++;
		}
	}
	
	for (j=0; j<N; j++) //���� ���� ����.  
	{
		sum=0;

		for(i=0; i<N; i++)
		{
			sum += bingo[i][j];
		}
		if(sum==0)
		{
			count++;
		}
	}
	sum=0;
	
	for(i=0; i<N; i++) // \���� �밢�� ���� ����. 
	{
		sum += bingo[i][i];
	}
	if(sum==0)
	{
		count++;
	}
	
	sum=0;
	
	for(i=0; i<N; i++) // /���� �밢�� ���� ����. 
	{
		sum += bingo[i][N-i-1];
	}
	if (sum==0)
	{
		count++;
	}
	
	printf("���� ���� �� : %d ����\n\n",count);
	return count;
}
