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

void scanString(char *string){		// eine Zeichenkette (String) einlesen.
	for(int i=0; i<200;i++){
		scanf("%c",&string[i]);
		if(string[i]=='\n'){
			break;
		}
		
	}
	
}

void playMorse(char zeichen){		// die Audiodateien abspielen. (mit -lwinmm kompilieren)
	switch(zeichen){
		case 'a':
		case 'A':
			PlaySound(TEXT("Audio\\a.wav"), NULL, SND_SYNC);
			break;
		case 'b':
		case 'B':
			PlaySound(TEXT("Audio\\b.wav"), NULL, SND_SYNC);
			break;
		case 'c':
		case 'C':
			PlaySound(TEXT("Audio\\c.wav"), NULL, SND_SYNC);
			break;
		case 'd':	
		case 'D':
			PlaySound(TEXT("Audio\\d.wav"), NULL, SND_SYNC);
			break;
		case 'e':
		case 'E':
			PlaySound(TEXT("Audio\\e.wav"), NULL, SND_SYNC);
			break;
		case 'f':
		case 'F':
			PlaySound(TEXT("Audio\\f.wav"), NULL, SND_SYNC);
			break;
		case 'g':
		case 'G':
			PlaySound(TEXT("Audio\\g.wav"), NULL, SND_SYNC);
			break;
		case 'h':
		case 'H':
			PlaySound(TEXT("Audio\\h.wav"), NULL, SND_SYNC);
			break;
		case 'i':
		case 'I':
			PlaySound(TEXT("Audio\\i.wav"), NULL, SND_SYNC);
			break;
		case 'j':
		case 'J':
			PlaySound(TEXT("Audio\\j.wav"), NULL, SND_SYNC);
			break;
		case 'k':
		case 'K':
			PlaySound(TEXT("Audio\\k.wav"), NULL, SND_SYNC);
			break;
		case 'l':
		case 'L':
			PlaySound(TEXT("Audio\\l.wav"), NULL, SND_SYNC);
			break;
		case 'm':
		case 'M':
			PlaySound(TEXT("Audio\\m.wav"), NULL, SND_SYNC);
			break;
		case 'n':
		case 'N':
			PlaySound(TEXT("Audio\\n.wav"), NULL, SND_SYNC);
			break;
		case 'o':
		case 'O':
			PlaySound(TEXT("Audio\\o.wav"), NULL, SND_SYNC);
			break;
		case 'p':
		case 'P':
			PlaySound(TEXT("Audio\\p.wav"), NULL, SND_SYNC);
			break;
		case 'q':
		case 'Q':
			PlaySound(TEXT("Audio\\q.wav"), NULL, SND_SYNC);
			break;
		case 'r':
		case 'R':
			PlaySound(TEXT("Audio\\r.wav"), NULL, SND_SYNC);
			break;
		case 's':
		case 'S':
			PlaySound(TEXT("Audio\\s.wav"), NULL, SND_SYNC);
			break;
		case 't':
		case 'T':
			PlaySound(TEXT("Audio\\t.wav"), NULL, SND_SYNC);
			break;
		case 'u':
		case 'U':
			PlaySound(TEXT("Audio\\u.wav"), NULL, SND_SYNC);
			break;
		case 'v':
		case 'V':
			PlaySound(TEXT("Audio\\v.wav"), NULL, SND_SYNC);
			break;
		case 'w':
		case 'W':
			PlaySound(TEXT("Audio\\w.wav"), NULL, SND_SYNC);
			break;
		case 'x':
		case 'X':
			PlaySound(TEXT("Audio\\x.wav"), NULL, SND_SYNC);
			break;
		case 'y':
		case 'Y':
			PlaySound(TEXT("Audio\\y.wav"), NULL, SND_SYNC);
			break;
		case 'z':
		case 'Z':
			PlaySound(TEXT("Audio\\z.wav"), NULL, SND_SYNC);
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
		else if(string[i]==string[-1]){
			break;
		}		
		else if(string[i]=='.'){
			break;
		}
		else if(string[i]=='\n'){
			break;
		}
	}
}
