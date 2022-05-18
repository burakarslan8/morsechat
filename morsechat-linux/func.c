#include "header.h"

static const char *morse[] = {		// das Morsealphabet
    ".-",   //A
    "-...", //B
    "-.-.", //C
    "-..",  //D
    ".",    //E
    "..-.", //F
    "--.",  //G
    "....", //H
    "..",   //I
    ".---", //J
    "-.-",  //K
    ".-..", //L
    "--",   //M
    "-.",   //N
    "---",  //O
    ".--.", //P
    "--.-", //Q
    ".-.",  //R
    "...",  //S
    "-",    //T
    "..-",  //U
    "...-", //V
    ".--",  //W
    "-..-", //X
    "-.--", //Y
    "--..", //Z
};

static const char alphabet[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};	// kleine Buchstaben

static const char alphabet_c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};	// große Buchstaben

void printString(char *string){		// eine Zeichenkette (String) ausdrucken.
	for(int i=0; i<200; i++){
		if(string[i]=='\n'){
			break;
		}
		printf("%c",string[i]);
		
	}
}

void scanString(char *string){			// eine Zeichenkette (String) einlesen.
	for(int i=0; i<200;i++){
		scanf("%c",&string[i]);
		if(string[i]=='\n'){
			break;
		}
		
	}
	
}

void playMorse(char zeichen){			// die Audiodateien abspielen.
	switch(zeichen){
		case 'a':
		case 'A':
			system("aplay -q Audio/a.wav");
			break;
			
		case 'b':
		case 'B':
			system("aplay -q Audio/b.wav");
			break;

		case 'c':
		case 'C':
			system("aplay -q Audio/c.wav");
			break;

		case 'd':
		case 'D':
			system("aplay -q Audio/d.wav");
			break;

		case 'e':
		case 'E':
			system("aplay -q Audio/e.wav");
			break;

		case 'f':
		case 'F':
			system("aplay -q Audio/f.wav");
			break;
		
		case 'g':
		case 'G':
			system("aplay -q Audio/g.wav");
			break;

		case 'h':
		case 'H':
			system("aplay -q Audio/h.wav");
			break;

		case 'i':
		case 'I':
			system("aplay -q Audio/i.wav");
			break;

		case 'j':
		case 'J':
			system("aplay -q Audio/j.wav");
			break;

		case 'k':
		case 'K':
			system("aplay -q Audio/k.wav");
			break;

		case 'l':
		case 'L':
			system("aplay -q Audio/l.wav");
			break;

		case 'm':
		case 'M':
			system("aplay -q Audio/m.wav");
			break;

		case 'n':
		case 'N':
			system("aplay -q Audio/n.wav");
			break;

		case 'o':
		case 'O':
			system("aplay -q Audio/o.wav");
			break;

		case 'p':
		case 'P':
			system("aplay -q Audio/p.wav");
			break;

		case 'q':
		case 'Q':
			system("aplay -q Audio/q.wav");
			break;

		case 'r':
		case 'R':
			system("aplay -q Audio/r.wav");
			break;

		case 's':
		case 'S':
			system("aplay -q Audio/s.wav");
			break;

		case 't':
		case 'T':
			system("aplay -q Audio/t.wav");
			break;

		case 'u':
		case 'U':
			system("aplay -q Audio/u.wav");
			break;

		case 'v':
		case 'V':
			system("aplay -q Audio/v.wav");
			break;

		case 'w':
		case 'W':
			system("aplay -q Audio/w.wav");
			break;

		case 'x':
		case 'X':
			system("aplay -q Audio/x.wav");
			break;

		case 'y':
		case 'Y':
			system("aplay -q Audio/y.wav");
			break;

		case 'z':
		case 'Z':
			system("aplay -q Audio/z.wav");
			break;
	}
}
void toMorse(char *string){					// den Text ins Morsealphabet übersetzen.
	for(int i=0; i<200; i++){
		for(int j=0; j<26; j++){
			if(string[i]==alphabet[j] || string[i]==alphabet_c[j]){
				printf("%s ",morse[j]);
				playMorse(string[i]);
			}
		}
		if(string[i]== ' '){
			printf("/ ");
		}
		else if(string[i]=='.'){
			break;
		}
		else if(string[i]==string[-1]){
			break;
		}
		else if(string[i]=='\n'){
			break;
		}
	}
}
