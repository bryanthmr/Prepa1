ecole.exe: ecole.o main.o
	gcc ecole.o main.o -o ecole.exe -Wall
	@echo "Executable compilé"

ecole.o: ecole.c ecole.h
	gcc -c ecole.c -o ecole.o -Wall
	@echo "ecole.o est compilé"

main.o: main.c ecole.h
	gcc -c main.c -o main.o -Wall
	@echo "main.o est compilé"

clean:
	rm -f *.o
