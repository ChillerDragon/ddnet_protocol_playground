all:
	clang main.c -o main -lddnet_protocol
	./main
