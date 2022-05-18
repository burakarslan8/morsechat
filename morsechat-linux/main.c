#include "header.h"

int main(int argc, char *argv[]){
	printf("********MorseChat********\n");
	printf("*************************\n");
	if(argc==3){

		if(!strcmp(argv[1],"--text")){  // Den eingegebenen Text übersetzen.
			toMorse(argv[2]);
			printf("\n");
		}
		else if(!strcmp(argv[1],"--file")){  // Aus einer Textdatei einlesen und übersetzen.
			char text[200];
			FILE* file;
   			file = fopen(argv[2], "r");
    			while (fgets(text, 200, file) != NULL) {
        			toMorse(text);
    			}
    			printf("\n");
    			fclose(file);
		}
		else{		// Der Fehlerfall
			printf("Etwas ist schiefgegangen. Achten Sie bitte auf die Argumente.\n");
		}
	}
	else if(argc==1){			// Die eingegebenen Texte übersetzen, bis '.' eingegeben wird.(in einer Schleife)
		char input[200];	
		printf("Geben Sie den zu uebersetzenden Text ein(. eingeben um das Programm zu beenden.)\n");
		do{	
			scanString(input);
			toMorse(input);
			printf("\n");
		}while(input[0] !='.');
	}
	else{					// Der Fehlerfall
		printf("Etwas ist schiefgegangen. Achten Sie bitte auf die Argumente.\n");
	}
	return 0;
}
