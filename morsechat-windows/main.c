#include "header.h"

int main(int argc, char *argv[]){
	if(argc==3){
		if(!strcmp(argv[1],"--text")){  // Den eingegebenen Text übersetzen.
			char copy[200];			// ich bin einigen Fehlern begegnet, deswegen wurde argv[2] kopiert.
			strcpy(copy, argv[2]);
			toMorse(copy);
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
	else if(argc==2 && !strcmp(argv[1], "--help")){	// --help Option
	
			printf("		    ----------------\n");
			printf("		   -----MorseChat----\n");
			printf("		    ----------------\n");
			
			printf("Optionen:\n");
			printf("\t--text\teinen Text eingeben und uebersetzen\n");
			printf("\t\t    z.B: ./morsechat --text 'Hallo Welt'\n\n");
			printf("\t--file\taus einer Textdatei einlesen und uebersetzen\n");
			printf("\t\t    z.B: ./morsechat --file text.txt\n\n");
			printf("\tkeine zusaetzlichen Argumente eingeben\n");
			printf("\t\t    z.B: ./morsechat\n\n");
			printf("\t--help\tmoegliche Optionen ansehen\n");
			printf("\t\t    z.B: ./morsechat --help\n\n");
	}
	else if(argc==1){					// Die eingegebenen Texte übersetzen, bis '.' eingegeben wird.(in einer Schleife)
		char input[200];	
		printf("Geben Sie den zu uebersetzenden Text ein(. eingeben um das Programm zu beenden.)\n");
		do{	
			scanString(input);
			toMorse(input);
			printf("\n");
		}while(input[0] !='.');
	}
	else{								// Der Fehlerfall
		printf("Etwas ist schiefgegangen. Achten Sie bitte auf die Argumente.\n");
	}	
	return 0;
}
