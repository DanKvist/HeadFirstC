#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"


int main()
{
	char msg[80];
	
	FILE *output_file = fopen("output.txt", "w");
	
	while (fgets(msg, 80, stdin)) {
		encrypt(msg);
		fprintf(output_file, "%s", msg);
	}
}
