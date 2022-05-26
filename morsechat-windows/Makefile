# MAKEFILE
# Benutzen Sie bitte den Befehl "mingw32-make" auf Windows
all: morsechat

morsechat: main.c func.c
	gcc main.c func.c -o morsechat -lwinmm

run:
	./morsechat
	
help: 
	./morsechat --help

clean: 
	rm morsechat