#include <stdio.h>
#include "func.h"

int main(void){
	char input[200];	
	printf("********MorseChat********\n");
	printf("*************************\n");
	printf("Geben Sie den zu uebersetzenden Text ein(. eingeben um das Programm zu beenden.)\n");
	do{	
		scanString(input);
		toMorse(input);
		printf("\n");
	}while(input[0] !='.');
	return 0;
}