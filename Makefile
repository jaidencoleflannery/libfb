.PHONY: build run

build:
	mkdir -p build
	clang ./src/libfb/main.c $(shell pkg-config --cflags sdl3) $(shell pkg-config --libs sdl3) -o ./build/framebuffer

run:
	./build/framebuffer

