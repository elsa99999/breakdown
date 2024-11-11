all:
	gcc -Isrc/Include -Lsrc/lib -o hello-sdl.exe hello-sdl.c -lmingw32 -lSDL2main -lSDL2