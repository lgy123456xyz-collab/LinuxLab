add:add.o
	gcc -o add add.o
add.o:add.s
	gcc -c add.s -o add.o
add.s:add.i
	gcc -S add.i -o add.s
add.i:add.c
	gcc -E add.c -o add.i
clean:
	rm -f add add.o add.s add.i