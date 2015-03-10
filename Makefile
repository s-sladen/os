all: cat

cat: lib
	$(MAKE) -C cat

lib:
	$(MAKE) -C lib

clean: cat-clean lib-clean

cat-clean:
	$(MAKE) -C cat clean

lib-clean:
	$(MAKE) -C lib clean