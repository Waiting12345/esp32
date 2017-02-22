exe : main.o
	gcc -o main main.o
compile : main.c
	gcc -c main.c
clean :
	rm main.o main