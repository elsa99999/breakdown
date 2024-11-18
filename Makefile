all:
	gcc -ISDL2/Include -LSDL2/lib -o main.exe main.c -lmingw32 -lSDL2main -lSDL2
	./main.exe

build:
	gcc -ISDL2/Include -LSDL2/lib -o main.exe main.c -lmingw32 -lSDL2main -lSDL2

run:
	./main.exe

clean:
	rm -f main.exe
	

# Pour compiler les .h
#gcc -ISDL2/Include -Isrc -LSDL2/lib -o main.exe main.c src/*.c -lmingw32 -lSDL2main -lSDL2