#include "stdlib.h"
#include "stdio.h"
#include "hexaconverter.h"
#include "string.h"

int main(int argc, char** argv) {
	const char* input = argv[1];
	char* output = convert(input);
	if(!strncmp(output,"",(strlen(input)*4))) {
		exit(EXIT_FAILURE);
	}
	printf("Output : %s\n", output);
	free(output);
	exit(EXIT_SUCCESS);
}