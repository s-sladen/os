cat: cat.o
	gcc -o cat -L../lib -lhelpers cat.o

cat.o:
	gcc -c -I../lib -o cat.o cat.c

clean:
	rm -f cat.o cat