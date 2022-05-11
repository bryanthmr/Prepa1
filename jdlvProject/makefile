jdv.exe: main.o fonction.o
	gcc  main.o fonction.o -o jdv.exe -Wall
	@echo "compilation du .exe"

fonction.o: fonction.c fonction.h
	gcc -c fonction.c -o fonction.o -Wall
	@echo "compilation des fonctions"

main.o: main.c fonction.h
	gcc -c main.c -o main.o -Wall
	@echo "compilation du main"

clean:
	 rm -f *.o
