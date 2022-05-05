#include "header.h"

static const char *morse[] = {
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

static const char alphabet[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

static const char alphabet_c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void printString(char *string){
	for(int i=0; i<200; i++){
		if(string[i]=='\n'){
			break;
		}
		printf("%c",string[i]);
		
	}
}

void scanString(char *string){
	for(int i=0; i<200;i++){
		scanf("%c",&string[i]);
		if(string[i]=='\n'){
			break;
		}
		
	}
	
}

void playMorse(char zeichen){
	switch(zeichen){
		case 'a':
			PlaySound(TEXT("Audio\\a.wav"), NULL, SND_SYNC);
			break;
		case 'A':
			PlaySound(TEXT("Audio\\a.wav"), NULL, SND_SYNC);
			break;
		case 'b':
			PlaySound(TEXT("Audio\\b.wav"), NULL, SND_SYNC);
			break;
		case 'B':
			PlaySound(TEXT("Audio\\b.wav"), NULL, SND_SYNC);
			break;
		case 'c':
			PlaySound(TEXT("Audio\\c.wav"), NULL, SND_SYNC);
			break;
		case 'C':
			PlaySound(TEXT("Audio\\c.wav"), NULL, SND_SYNC);
			break;	
		case 'd':
			PlaySound(TEXT("Audio\\d.wav"), NULL, SND_SYNC);
			break;
		case 'D':
			PlaySound(TEXT("Audio\\d.wav"), NULL, SND_SYNC);
			break;
		case 'e':
			PlaySound(TEXT("Audio\\e.wav"), NULL, SND_SYNC);
			break;
		case 'E':
			PlaySound(TEXT("Audio\\e.wav"), NULL, SND_SYNC);
			break;
		case 'f':
			PlaySound(TEXT("Audio\\f.wav"), NULL, SND_SYNC);
			break;
		case 'F':
			PlaySound(TEXT("Audio\\f.wav"), NULL, SND_SYNC);
			break;
		case 'g':
			PlaySound(TEXT("Audio\\g.wav"), NULL, SND_SYNC);
			break;
		case 'G':
			PlaySound(TEXT("Audio\\g.wav"), NULL, SND_SYNC);
			break;
		case 'h':
			PlaySound(TEXT("Audio\\h.wav"), NULL, SND_SYNC);
			break;
		case 'H':
			PlaySound(TEXT("Audio\\h.wav"), NULL, SND_SYNC);
			break;
		case 'i':
			PlaySound(TEXT("Audio\\i.wav"), NULL, SND_SYNC);
			break;
		case 'I':
			PlaySound(TEXT("Audio\\i.wav"), NULL, SND_SYNC);
			break;
		case 'j':
			PlaySound(TEXT("Audio\\j.wav"), NULL, SND_SYNC);
			break;
		case 'J':
			PlaySound(TEXT("Audio\\j.wav"), NULL, SND_SYNC);
			break;
		case 'k':
			PlaySound(TEXT("Audio\\k.wav"), NULL, SND_SYNC);
			break;
		case 'K':
			PlaySound(TEXT("Audio\\k.wav"), NULL, SND_SYNC);
			break;
		case 'l':
			PlaySound(TEXT("Audio\\l.wav"), NULL, SND_SYNC);
			break;
		case 'L':
			PlaySound(TEXT("Audio\\l.wav"), NULL, SND_SYNC);
			break;
		case 'm':
			PlaySound(TEXT("Audio\\m.wav"), NULL, SND_SYNC);
			break;
		case 'M':
			PlaySound(TEXT("Audio\\m.wav"), NULL, SND_SYNC);
			break;
		case 'n':
			PlaySound(TEXT("Audio\\n.wav"), NULL, SND_SYNC);
			break;
		case 'N':
			PlaySound(TEXT("Audio\\n.wav"), NULL, SND_SYNC);
			break;
		case 'o':
			PlaySound(TEXT("Audio\\o.wav"), NULL, SND_SYNC);
			break;
		case 'O':
			PlaySound(TEXT("Audio\\o.wav"), NULL, SND_SYNC);
			break;
		case 'p':
			PlaySound(TEXT("Audio\\p.wav"), NULL, SND_SYNC);
			break;
		case 'P':
			PlaySound(TEXT("Audio\\p.wav"), NULL, SND_SYNC);
			break;
		case 'q':
			PlaySound(TEXT("Audio\\q.wav"), NULL, SND_SYNC);
			break;
		case 'Q':
			PlaySound(TEXT("Audio\\q.wav"), NULL, SND_SYNC);
			break;
		case 'r':
			PlaySound(TEXT("Audio\\r.wav"), NULL, SND_SYNC);
			break;
		case 'R':
			PlaySound(TEXT("Audio\\r.wav"), NULL, SND_SYNC);
			break;
		case 's':
			PlaySound(TEXT("Audio\\s.wav"), NULL, SND_SYNC);
			break;
		case 'S':
			PlaySound(TEXT("Audio\\s.wav"), NULL, SND_SYNC);
			break;
		case 't':
			PlaySound(TEXT("Audio\\t.wav"), NULL, SND_SYNC);
			break;
		case 'T':
			PlaySound(TEXT("Audio\\t.wav"), NULL, SND_SYNC);
			break;
		case 'u':
			PlaySound(TEXT("Audio\\u.wav"), NULL, SND_SYNC);
			break;
		case 'U':
			PlaySound(TEXT("Audio\\u.wav"), NULL, SND_SYNC);
			break;
		case 'v':
			PlaySound(TEXT("Audio\\v.wav"), NULL, SND_SYNC);
			break;
		case 'V':
			PlaySound(TEXT("Audio\\v.wav"), NULL, SND_SYNC);
			break;
		case 'w':
			PlaySound(TEXT("Audio\\w.wav"), NULL, SND_SYNC);
			break;
		case 'W':
			PlaySound(TEXT("Audio\\w.wav"), NULL, SND_SYNC);
			break;
		case 'x':
			PlaySound(TEXT("Audio\\x.wav"), NULL, SND_SYNC);
			break;
		case 'X':
			PlaySound(TEXT("Audio\\x.wav"), NULL, SND_SYNC);
			break;
		case 'y':
			PlaySound(TEXT("Audio\\y.wav"), NULL, SND_SYNC);
			break;
		case 'Y':
			PlaySound(TEXT("Audio\\y.wav"), NULL, SND_SYNC);
			break;
		case 'z':
			PlaySound(TEXT("Audio\\z.wav"), NULL, SND_SYNC);
			break;
		case 'Z':
			PlaySound(TEXT("Audio\\z.wav"), NULL, SND_SYNC);
			break;
	}
}
void toMorse(char *string){
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
		else if(string[i]=='\n'){
			break;
		}
	}

}
