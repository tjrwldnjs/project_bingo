#include "bingo.h"

int main(int argc, char *argv[]) {

	int my_bingo[N][N];
	int com_bingo[N][N];
	
	initiate_bingo(my_bingo);
	print_bingo(my_bingo);
	
	initiate_bingo(com_bingo);
	print_bingo(com_bingo);
	 
	return 0;
}
