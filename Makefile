all:
	mkdir -p bin
	clang main.c -o ./bin/main -lddnet_protocol
	./bin/main
