all: build/out

build/out: src/main.c
	mkdir build
	gcc src/main.c -o build/out

exec: build/out
	./build/out