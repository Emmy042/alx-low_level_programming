#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>

/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, written = 0;

	/* filename must not be NULL */
	if (filename == NULL)
		return (-1);

	/* open file, create if needed, truncate if exists, permissions rw------- */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, write it to file */
	if (text_content != NULL)
	{
		/* calculate length of text_content */
		for (len = 0; text_content[len]; len++)
			;

		written = write(fd, text_content, len);
		if (written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
