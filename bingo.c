#include "function 1 2.h"

int main(int argc, char *argv[]) {

	printf("�����̰� ���� BINGO!!!!\n");
	printf("\n");
	
	int my_bingo[N][N];
	int com_bingo[N][N];
	
	srand((unsigned)time(NULL)); //���ο� �����ؾ��Ѵ�. �Լ��ȿ� �����ϸ� �� �����ǰ� ��ǻ���� �������� ���Գ��� 
	
	initiate_bingo(my_bingo);
	print_bingo(my_bingo);
	
	initiate_bingo(com_bingo);
	print_bingo(com_bingo);
	
	
	int n;
	get_number_by_me(n);
	
	void process_bingo(int bingo[N][N]);
	 
	return 0;
}
