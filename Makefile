example: example.c
	clang example.c -o example

.PHONY: test
test:
	clang test.c -o test
	./test

.PHONY: clean
clean:
	-rm example test
