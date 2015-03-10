libhelpers.so: helpers.o
	gcc -shared -o libhelpers.so helpers.o

helpers.o:
	gcc -c -fpic -o helpers.o helpers.c

clean:
	rm -f helpers.o libhelpers.so