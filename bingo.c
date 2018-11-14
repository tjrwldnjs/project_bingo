#include "bingo.h"

int main(int argc, char *argv[]) {

	int my_bingo[N][N];
	int com_bingo[N][N];
	
	srand((unsigned)time(NULL));
	
	initiate_bingo(my_bingo);
	print_bingo(my_bingo);
	
	initiate_bingo(com_bingo);
	
	int n;
	get_number_by_me(n);
	 
	return 0;
}
