TAR=test
CC:=gcc
$(TAR):circle.o cube.o test.o
	$(CC) circle.o cube.o test.o -o $(TAR)
circle.o:circle.c
	$(CC) -c circle.c -o circle.o
cube.o:cube.c
	$(CC) -c cube.c -o cube.o
test.o:test.c
	$(CC) -c test.c -o test.o

.PHONY: clean
clean:
	rm -rf circle.o cube.o test.o $(TAR)