# MAKEFILE

all: morse

morse: morse.o func.o
	gcc morse.o func.o -o morse

morse.o: morse.c
	gcc -c morse.c

func.o: func.c
	gcc -c func.c

run:
	./morse

clean:
	rm *.o
