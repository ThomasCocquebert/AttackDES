hexaconverter.o: hexaconverter.c
	gcc -Wall -g -c hexaconverter.c

main.o: main.c hexaconverter.h
	gcc -Wall -g -c main.c

AttackDES: main.o hexaconverter.o
	gcc *.o -Wall -g -o AttackDES
	
clean:
	rm *.o