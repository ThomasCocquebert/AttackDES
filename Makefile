hexaconverter.o: hexaconverter.c
	gcc -Wall -g -c hexaconverter.c

permutation.o: permutation.c
	gcc -Wall -g -c permutation.c

main.o: main.c hexaconverter.h permutation.h
	gcc -Wall -g -c main.c

AttackDES: hexaconverter.o permutation.o main.o
	gcc *.o -Wall -g -o AttackDES
	
clean:
	rm *.o