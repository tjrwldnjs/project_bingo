#include "function 3 4.h"

void get_number_by_me(int num)
{
	int number;
	int i, retry;
	int check[N*N];
	int count=0;
	
	do{
		retry = 0; // 0은 나, 1은 컴퓨터 
		if (num==0)
		{
			printf("숫자를 입력하세욤 : ");
			scanf("%d", &number);
			printf("\n");
			
			if(number<1 || number>N*N)
			{
				printf("잘못입력했어욤. 다시 입력하세요!!\n\n");
				retry = 1;  
			} 
		}
		
		else
		{
			number = rand()%N*N+1;
		}
		
		if(retry == 0)
		{
			for (i=0; i<count; i++)
			
			if(retry == 0)
			{
				for(i=0; i<N; i++)
				{
					if(check[i]==number)
					{
						retry=1;
						break;
					}
				}
			}
		}
	} while (retry == 1); 
	
	
	return ;
}

