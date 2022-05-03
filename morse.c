#include <stdio.h>
#include "p_s.h"

int main(void){
	char input[100];	
	printf("********MorseChat********\n");
	printf("Geben Sie den zu übersetzenden Text ein(. eingeben um das Programm zu beenden.)\n");
	do{	
		scanString(input);
		toMorse(input);
		printf("\n");
	}while(input[0] !='.');
	return 0;
}
