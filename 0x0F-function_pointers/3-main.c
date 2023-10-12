#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_usage - Prints the program's usage message.
 * @program_name: Name of the program.
 */
void print_usage(char *program_name) {
    fprintf(stderr, "Usage: %s <number_of_bytes>\n", program_name);
}

/**
 * print_error - Prints an error message and exits with the specified code.
 * @message: The error message to print.
 * @exit_code: The exit code for the program.
 */
void print_error(char *message, int exit_code) {
    fprintf(stderr, "%s\n", message);
    exit(exit_code);
}

/**
 * read_and_print_opcodes - Reads and prints opcodes.
 * @bytes: Number of bytes to read.
 * @fp: File pointer.
 * Return: 0 on success, exits on error.
 */
int read_and_print_opcodes(int bytes, FILE *fp) {
    int i;
    unsigned char opcode;

    for (i = 0; i < bytes; i++) {
        if (fread(&opcode, 1, 1, fp) != 1) {
            print_error("Error reading file.", 4);
        }

        if (i == bytes - 1) {
            printf("%02x\n", opcode);
        } else {
            printf("%02x ", opcode);
        }
    }

    return 0;
}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, exits on error.
 */
int main(int argc, char *argv[]) {
    int bytes;
    FILE *fp;

    if (argc != 2) {
        print_usage(argv[0]);
        print_error("Invalid number of arguments.", 1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0) {
        print_error("Number of bytes cannot be negative.", 2);
    }

    fp = fopen(argv[0], "r");
    if (fp == NULL) {
        print_error("Error opening the file.", 3);
    }

    read_and_print_opcodes(bytes, fp);

    fclose(fp);
    return 0;
}
