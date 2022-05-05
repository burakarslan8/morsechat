#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

static void playMorse(char zeichen){
	switch(zeichen){
		case 'a':
			system("aplay -q Audio/a.wav");
			break;
		case 'A':
			system("aplay -q Audio/a.wav");
			break;
		case 'b':
			system("aplay -q Audio/b.wav");
			break;
		case 'B':
			system("aplay -q Audio/b.wav");
			break;
		case 'c':
			system("aplay -q Audio/c.wav");
			break;
		case 'C':
			system("aplay -q Audio/c.wav");
			break;	
		case 'd':
			system("aplay -q Audio/d.wav");
			break;
		case 'D':
			system("aplay -q Audio/d.wav");
			break;
		case 'e':
			system("aplay -q Audio/e.wav");
			break;
		case 'E':
			system("aplay -q Audio/e.wav");
			break;
		case 'f':
			system("aplay -q Audio/f.wav");
			break;
		case 'F':
			system("aplay -q Audio/f.wav");
			break;
		case 'g':
			system("aplay -q Audio/g.wav");
			break;
		case 'G':
			system("aplay -q Audio/g.wav");
			break;
		case 'h':
			system("aplay -q Audio/h.wav");
			break;
		case 'H':
			system("aplay -q Audio/h.wav");
			break;
		case 'i':
			system("aplay -q Audio/i.wav");
			break;
		case 'I':
			system("aplay -q Audio/i.wav");
			break;
		case 'j':
			system("aplay -q Audio/j.wav");
			break;
		case 'J':
			system("aplay -q Audio/j.wav");
			break;
		case 'k':
			system("aplay -q Audio/k.wav");
			break;
		case 'K':
			system("aplay -q Audio/k.wav");
			break;
		case 'l':
			system("aplay -q Audio/l.wav");
			break;
		case 'L':
			system("aplay -q Audio/l.wav");
			break;
		case 'm':
			system("aplay -q Audio/m.wav");
			break;
		case 'M':
			system("aplay -q Audio/m.wav");
			break;
		case 'n':
			system("aplay -q Audio/n.wav");
			break;
		case 'N':
			system("aplay -q Audio/n.wav");
			break;
		case 'o':
			system("aplay -q Audio/o.wav");
			break;
		case 'O':
			system("aplay -q Audio/o.wav");
			break;
		case 'p':
			system("aplay -q Audio/p.wav");
			break;
		case 'P':
			system("aplay -q Audio/p.wav");
			break;
		case 'q':
			system("aplay -q Audio/q.wav");
			break;
		case 'Q':
			system("aplay -q Audio/q.wav");
			break;
		case 'r':
			system("aplay -q Audio/r.wav");
			break;
		case 'R':
			system("aplay -q Audio/r.wav");
			break;
		case 's':
			system("aplay -q Audio/s.wav");
			break;
		case 'S':
			system("aplay -q Audio/s.wav");
			break;
		case 't':
			system("aplay -q Audio/t.wav");
			break;
		case 'T':
			system("aplay -q Audio/t.wav");
			break;
		case 'u':
			system("aplay -q Audio/u.wav");
			break;
		case 'U':
			system("aplay -q Audio/u.wav");
			break;
		case 'v':
			system("aplay -q Audio/v.wav");
			break;
		case 'V':
			system("aplay -q Audio/v.wav");
			break;
		case 'w':
			system("aplay -q Audio/w.wav");
			break;
		case 'W':
			system("aplay -q Audio/w.wav");
			break;
		case 'x':
			system("aplay -q Audio/x.wav");
			break;
		case 'X':
			system("aplay -q Audio/x.wav");
			break;
		case 'y':
			system("aplay -q Audio/y.wav");
			break;
		case 'Y':
			system("aplay -q Audio/y.wav");
			break;
		case 'z':
			system("aplay -q Audio/z.wav");
			break;
		case 'Z':
			system("aplay -q Audio/z.wav");
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
