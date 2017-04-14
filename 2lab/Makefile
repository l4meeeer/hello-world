all: main

bstreemain: bstreemain.o bstree.o
	gcc -Wall -Werror -o bin/bstreemain build/bstreemain.o build/bstree.o

bstreemain.o: src/bstreemain.c
	gcc -Wall -Werror -o build/bstreemain.o -c src/bstreemain.c

bstree.o: src/bstree.c
	gcc -Wall -Werror -o build/bstree.o -c src/bstree.c

hashtabmain: hashtabmain.o hashtab.o
	gcc -Wall -Werror -o bin/hashtabmain build/hashtabmain.o build/hashtab.o

hashtabmain.o: src/hashtabmain.c
	gcc -Wall -Werror -o build/hashtabmain.o -c src/hashtabmain.c

hashtab.o: src/hashtab.c
	gcc -Wall -Werror -o build/hashtab.o -c src/hashtab.c

clean:
	rm -rf build/* bin/*