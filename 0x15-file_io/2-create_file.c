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
	int o;
	int w;
	int size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, size);
	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
