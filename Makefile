hexaconverter.o: hexaconverter.c
	gcc -Wall -g -c hexaconverter.c

permutation.o: permutation.c
	gcc -Wall -g -c permutation.c

sbox.o: sbox.c
	gcc -Wall -g -c sbox.c

xor.o: xor.c
	gcc -Wall -g -c xor.c

main.o: main.c hexaconverter.h permutation.h sbox.h xor.h
	gcc -Wall -g -c main.c

AttackDES: hexaconverter.o permutation.o sbox.o xor.o main.o
	gcc *.o -Wall -g -o AttackDES
	
clean:
	rm *.o