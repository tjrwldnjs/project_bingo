#include "function 1 2.h"

int main(int argc, char *argv[]) {
	
	// �ؾ��� ��  �� ���ڸ� �ߺ��Է����� �� �����޼��� ����ϰ� �ٽ� �޾ƾ���. >> �� ���� �ߺ����
	//            ��ǻ�Ͱ� ���ڸ� �ߺ��Է���. >> ��ǻ�� ���� �ߺ���� 
	//            ���� �Է��� ���� ��ǻ�Ͱ� �Է��� ���� ���� >> ��� �� ����϶��.. 

	printf("--�����̰� ���� BINGO!!!!--\n");
	printf("\n");
	
	int my_bingo[N][N];
	int com_bingo[N][N];
	int My_count;
	int Com_count;
	int count;
	int turn;
	
	srand((unsigned)time(NULL)); //���ο� �����ؾ��Ѵ�. �Լ��ȿ� �����ϸ� �� �����ǰ� ��ǻ���� �������� ���Գ��� 
	
	initiate_bingo(my_bingo);
	initiate_bingo(com_bingo);
	
	print_bingo(my_bingo);
	print_bingo(com_bingo);	
	
	while(1)
	{	
		get_number_byMe(my_bingo);
		process_bingo(my_bingo);
		process_bingo(com_bingo);
		
		get_number_byCom(com_bingo);
		process_bingo(my_bingo);
		process_bingo(com_bingo);
		
		turn++;
		
		print_bingo(my_bingo);
		print_bingo(com_bingo);
			
		My_count=count_bingo(my_bingo,count);
		Com_count=count_bingo(com_bingo,count);
		
		while(My_count>=M || Com_count>=M)
		{
			if(My_count>=M && Com_count<M)
			{
				printf("�¸��� : ��\n");
				printf("%d��°�� �¸��߽��ϴ�.\n", turn);
				break;
			}
			if(Com_count>=M && My_count<M)
			{
				printf("�¸��� : ��\n");
				printf("%d��°�� �¸��߽��ϴ�.\n", turn);
				break;
			}
			if(My_count>=M && Com_count>=M)
			{
				printf("�����ϴ�.\n");
				printf("%d��°�� �����ϴ�.\n", turn); 
			} 	 
		}
	}
	
		
	return 0;
}
