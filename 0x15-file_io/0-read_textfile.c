#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads file and prints its contents into standard output
 * @filename: name of the file to read
 * @letters: number of letters to read
 *
 * Return: Number of letters printed (success) or 0 (failure)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r;
	ssize_t w;
	char *buffer;

	buffer = malloc(letters * sizeof(char));
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(o);
	return (w);
}
