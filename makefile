build:
	@gcc -o output *.c

run:
	@./output

clear:
	clear

all: clear build run