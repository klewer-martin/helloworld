#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/main.h"
#include "../include/arguments.h"
#include "../include/macros.h"

int main(int argc, char * argv[])
{
	status_t st;
	if((st = validate_arguments(argc, argv)) != OK)
		return st;
	
	char * src;
	char * dest;

	src = (char *)malloc(100 * sizeof(char));
	dest = (char *)malloc(100 * sizeof(char));

	if((st = set_files_name(argc, argv, src, dest)) != OK)
		return st;

	printf("src: %s, dest: %s;\n", src, dest);

	return OK;
}


