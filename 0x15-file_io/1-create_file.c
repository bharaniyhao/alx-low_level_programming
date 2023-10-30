#include "main.h"
/**
 * create_file - Creates a file with specified permissions and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
		write_status = write(file_descriptor, text_content, text_length);
		close(file_descriptor);
		if (write_status != (int)text_length)
			return (-1);
	}
	else
		close(file_descriptor);

	return (1);
}

