#include "function 1 2.h"

int count_bingo(int bingo[N][N])
{
	int i,j;
	int sum; // 입력받은 숫자를 0으로 바꾸기 때문에 0들의 합은 0인것을 이용하여 빙고를 센다. 
	int count=0; //빙고를 세는 변수 
	
	for(i=0; i<N; i++) //가로 빙고를 센다. 
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
	
	for (j=0; j<N; j++) //세로 빙고를 센다.  
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
	
	for(i=0; i<N; i++) // \이쪽 대각선 빙고를 센다. 
	{
		sum += bingo[i][i];
	}
	if(sum==0)
	{
		count++;
	}
	
	sum=0;
	
	for(i=0; i<N; i++) // /이쪽 대각선 빙고를 센다. 
	{
		sum += bingo[i][N-i-1];
	}
	if (sum==0)
	{
		count++;
	}
	
	printf("현재 빙고 수 : %d 빙고\n\n",count);
	return count;
}
