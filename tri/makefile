trilent.exe: fonction.o trilent.o main.o trisRapide.o
	gcc fonction.o main.o trisRapide.o trilent.o -o trilent.exe
	@echo "compliation du exe"

fonction.o: fonction.c fonction.h
	gcc -c fonction.c -o fonction.o -Wall
	@echo "compliation du foncton.o"

main.o: main.c fonction.h trilent.h trisRapide.h
	gcc -c main.c -o main.o -Wall
	@echo "compliation du main.o"

trilent.o: trilent.c trilent.h fonction.h
	gcc -c trilent.c -o trilent.o -Wall
	@echo "compliation du trilent.o"

trisRapide.o: trisRapide.c trisRapide.h fonction.h
	gcc -c trisRapide.c -o trisRapide.o -Wall
	@echo "compliation du trisRapide.o"

clean:
	rm -f *.o
