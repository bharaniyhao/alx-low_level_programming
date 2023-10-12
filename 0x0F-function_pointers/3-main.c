#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Print opcodes of its own program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	FILE *fp;
	unsigned char opcode;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <number_of_bytes>\n", argv[0]);
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		fprintf(stderr, "Number of bytes cannot be negative.\n");
		exit(2);
	}

	fp = fopen(argv[0], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error opening the file.\n");
		exit(3);
	}

	for (i = 0; i < bytes; i++)
	{
		if (fread(&opcode, 1, 1, fp) != 1)
		{
			fprintf(stderr, "Error reading file.\n");
			exit(4);
		}

		if (i == bytes - 1)
			printf("%02x\n", opcode);
		else
			printf("%02x ", opcode);
	}

	fclose(fp);
	return (0);
}
