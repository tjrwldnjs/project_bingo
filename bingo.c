#include "function 1 2.h"

int main(int argc, char *argv[]) {
	
	printf("-------------------------\n");
	printf("   �������� �����Դϴ�\n");
	printf("-------------------------\n");
	
	int my_bingo[N][N];
	int com_bingo[N][N];
	int My_count;
	int Com_count;
	int count;
	int turn; //�õ� Ƚ���� ���� ���� ���� 
	
	srand((unsigned)time(NULL)); //���ο� �����ؾ��Ѵ�. �Լ��ȿ� �����ϸ� �� �����ǰ� ��ǻ���� �������� ���Գ��� 
	
	initiate_bingo(my_bingo); //�� ������ 
	initiate_bingo(com_bingo); //��ǻ���� ������ 
	
	print_bingo(my_bingo); //�� ������ ��� 
	
	while(1)
	{	
		get_number_byMe(my_bingo); //���� ���ڸ� �Է� 
		process_bingo(my_bingo); //���� �Է��� ���ڸ� 0���� �ٲ���. 
		process_bingo(com_bingo); //��ǻ�Ͱ� �Է��� ���ڸ� 0���� �ٲ��� 
		
		get_number_byCom(com_bingo); //��ǻ�Ͱ� ���ڸ� �Է� 
		process_bingo(my_bingo); //���� �Է��� ���ڸ� 0���� �ٲ���. 
		process_bingo(com_bingo); //��ǻ�Ͱ� �Է��� ���ڸ� 0���� �ٲ���. 
		
		turn++; //�õ� Ƚ���� ����������. 
		
		print_bingo(my_bingo);
			
		My_count=count_bingo(my_bingo,count);
		Com_count=count_bingo(com_bingo,count);
		
			if(My_count>=M && Com_count<M)
			{
				printf("�¸��� : ��\n\n");
				printf("%d��°�� �¸��߽��ϴ�.\n", turn);
				break;
			}
			if(Com_count>=M && My_count<M)
			{
				printf("�¸��� : ��ǻ��\n\n");
				printf("%d��°�� �¸��߽��ϴ�.\n", turn);
				break;
			}
			if(My_count>=M && Com_count>=M)
			{
				printf("�����ϴ�.\n\n");
				printf("%d��°�� �����ϴ�.\n", turn);
				break; 
			} 
		 
	}
		
	return 0;
}
