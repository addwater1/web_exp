build:
	gcc -c backup.c common.c
	gcc backup.o common.o -o main
clean:
	rm main *.o
