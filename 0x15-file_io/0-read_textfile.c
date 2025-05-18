#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed,
 *         or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_read, bytes_written;

	char *buffer;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open file for reading only */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate buffer to hold letters + 1 for safety */
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read letters bytes from file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write bytes_read to stdout */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);

}
