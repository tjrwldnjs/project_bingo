#include "function 1 2.h"

int main(int argc, char *argv[]) {
	
	printf("-------------------------\n");
	printf("   지원이의 빙고입니당\n");
	printf("-------------------------\n");
	
	int my_bingo[N][N];
	int com_bingo[N][N];
	int My_count;
	int Com_count;
	int count;
	int turn;
	
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
		
		turn++;
		
		print_bingo(my_bingo);
		print_bingo(com_bingo);
			
		My_count=count_bingo(my_bingo,count);
		Com_count=count_bingo(com_bingo,count);
		
			if(My_count>=M && Com_count<M)
			{
				printf("승리자 : 나\n\n");
				printf("%d번째에 승리했습니다.\n", turn);
				break;
			}
			if(Com_count>=M && My_count<M)
			{
				printf("승리자 : 컴퓨터\n\n");
				printf("%d번째에 승리했습니다.\n", turn);
				break;
			}
			if(My_count>=M && Com_count>=M)
			{
				printf("비겼습니다.\n\n");
				printf("%d번째에 비겼습니다.\n", turn);
				break; 
			} 
		 
	}
		
	return 0;
}
