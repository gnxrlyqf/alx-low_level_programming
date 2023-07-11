#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - crates a file and appends text to it
 * @filename: name of the file to create
 * @text_content: content to append to the file
 *
 * Return: 1 (Success) 0 (fail)
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t o;
	ssize_t w;
	int size = 0;

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	w = write(o, text_content, size);
	if (o == -1 || w == -1)
		return (0);
	close(o);
	return (1);
}
