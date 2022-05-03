# MAKEFILE

all: morse

morse: morse.o p_s.o
	gcc morse.o p_s.o -o morse

morse.o: morse.c
	gcc -c morse.c

p_s.o: p_s.c
	gcc -c p_s.c

run:
	./morse

clean:
	rm *.o
