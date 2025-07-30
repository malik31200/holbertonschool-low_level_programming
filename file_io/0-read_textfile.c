#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * @filename: is the file to read
 * @letters: is the numbers of letters
 * Return: 0 is NULL or return the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rcount, wcount;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		close(fd);
		return (0);
	}
	rcount = read(fd, temp, letters);
	if (rcount == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}
	wcount = write(STDOUT_FILENO, temp, rcount);
	if (wcount == -1 || wcount != rcount)
	{
		free(temp);
		close(fd);
		return (0);
	}
	free(temp);
	close(fd);
	return (wcount);
}
