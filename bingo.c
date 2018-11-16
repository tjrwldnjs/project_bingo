#include "function 1 2.h"

int main(int argc, char *argv[]) {

	printf("--지원이가 만든 BINGO!!!!--\n");
	printf("\n");
	
	int my_bingo[N][N];
	int com_bingo[N][N];
	
	srand((unsigned)time(NULL)); //메인에 선언해야한다. 함수안에 선언하면 내 빙고판과 컴퓨터의 빙고판이 같게나옴 
	
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
	
		print_bingo(my_bingo);
		print_bingo(com_bingo);
	}

	count_bingo(my_bingo);
	count_bingo(com_bingo);
	
	return 0;
}
