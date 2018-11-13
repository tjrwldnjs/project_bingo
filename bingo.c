#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingo.h"

int main(int argc, char *argv[]) {

	
	initiate_bingo();
	
	print_bingo(initiate_bingo);
	 
	return 0;
}
