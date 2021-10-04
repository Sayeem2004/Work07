all: main.o
	gcc -o main main.o

main.o:
	gcc -c main.c

run:
	./main

clean:
	rm main.o
