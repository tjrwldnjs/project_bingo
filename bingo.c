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
	int turn; //시도 횟수를 세기 위한 변수 
	
	srand((unsigned)time(NULL)); //메인에 선언해야한다. 함수안에 선언하면 내 빙고판과 컴퓨터의 빙고판이 같게나옴 
	
	initiate_bingo(my_bingo); //내 빙고판 
	initiate_bingo(com_bingo); //컴퓨터의 빙고판 
	
	print_bingo(my_bingo); //내 빙고판 출력 
	
	while(1)
	{	
		get_number_byMe(my_bingo); //내가 숫자를 입력 
		process_bingo(my_bingo); //내가 입력한 숫자를 0으로 바꿔줌. 
		process_bingo(com_bingo); //컴퓨터가 입력한 숫자를 0으로 바꿔줌 
		
		get_number_byCom(com_bingo); //컴퓨터가 숫자를 입력 
		process_bingo(my_bingo); //내가 입력한 숫자를 0으로 바꿔줌. 
		process_bingo(com_bingo); //컴퓨터가 입력한 숫자를 0으로 바꿔줌. 
		
		turn++; //시도 횟수를 증가시켜줌. 
		
		print_bingo(my_bingo);
			
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
