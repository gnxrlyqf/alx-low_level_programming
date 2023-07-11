#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - copies text from a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return:
 * 0 (Success)
 * 97 (wrong syntax)
 * 98 (can't read source file)
 * 99 (can't write to destination file)
 * 100 (can't close a file)
*/

int main(int ac, char **av)
{
	int from, to, w, r;
	char *buffer;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		exit(101);
	r = read(from, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while (r > 0)
	{
		w = write(to, &buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
				exit(99);
		r = read(from, &buffer, 1024);
	}
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]), exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]), exit(100);
}
