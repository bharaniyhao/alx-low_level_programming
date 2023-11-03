#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * error_exit - Display an error message and exit with status 98
 * @msg: The error message to display
 */
void error_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * read_elf_header - Read and display the ELF header information
 * @fd: File descriptor of the ELF file
 */
void read_elf_header(int fd)
{
	Elf64_Ehdr header;
	char magic[16];

	if (read(fd, &header, sizeof(header)) == -1)
		error_exit("Error: Unable to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file");

	lseek(fd, 0, SEEK_SET); 

	printf("ELF Header:\n");
	printf("  Magic:   ");
	read(fd, magic, EI_NIDENT);
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%s", magic[i], (i < EI_NIDENT - 1) ? " " : "\n");
	printf("  Class:                             %s\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header.e_type);
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or an error code
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't open ELF file");

	read_elf_header(fd);

	if (close(fd) == -1)
		error_exit("Error: Can't close ELF file");

	return (0);
}
