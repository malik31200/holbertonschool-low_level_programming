#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *@argc: is a number of argument
 *@argv: is an array of argument strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	{
		int res;

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		res = cp_file_from(argv[1], argv[2]);
		printf("-> %i)\n", res);
		return (0);
	}
}
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * cp_file_from - copy file_from to file_to
 * @file_from: source file
 * @file_to: destination file
 * Return: 0 if ok or error return 97, 98 99 or 100
 */
int cp_file_from(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, n_read, n_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
