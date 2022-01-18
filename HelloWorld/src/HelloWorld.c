#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		fprintf(stderr, "Expected an argument\n");
		exit(-1);
	}
	if(argc == 2 && strcmp(argv[1], "-h") == 0)
	{
		printf("%s <words>\n", argv[0]);
		return EXIT_SUCCESS;
	}
	for(int i = 1; i < argc; ++i)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
