soccer.exe: soccer.o main.o
	gcc soccer.o main.o -o soccer.exe -Wall
	@echo "Executable compilé"

soccer.o: soccer.c soccer.h
	gcc -c soccer.c -o soccer.o -Wall
	@echo "soccer.o est compilé"

main.o: main.c soccer.h
	gcc -c main.c -o main.o -Wall
	@echo "main.o est compilé"

clean:
	rm -f *.o
