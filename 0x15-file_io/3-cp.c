#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * err_exit - print error to stderr and exit
 * @code: exit code
 * @fmt: format string
 * @arg: format arg
 */
static void err_exit(int code, const char *fmt, const char *arg)
{
	dprintf(STDERR_FILENO, fmt, arg);
	exit(code);
}

/**
 * main - copy contents of one file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or exits with 97-100 on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char *buf;

	if (ac != 3)
		err_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		err_exit(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2],
		     O_CREAT | O_WRONLY | O_TRUNC,
		     S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to < 0)
		err_exit(99, "Error: Can't write to %s\n", av[2]);

	buf = malloc(BUF_SIZE);
	if (!buf)
		err_exit(99, "Error: Can't write to %s\n", av[2]);

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			err_exit(99, "Error: Can't write to %s\n", av[2]);
	}
	if (r < 0)
		err_exit(98, "Error: Can't read from file %s\n", av[1]);

	free(buf);
	if (close(fd_from) < 0)
		err_exit(100, "Error: Can't close fd %d\n", (char *)(long)fd_from);
	if (close(fd_to) < 0)
		err_exit(100, "Error: Can't close fd %d\n", (char *)(long)fd_to);

	return (0);
}
