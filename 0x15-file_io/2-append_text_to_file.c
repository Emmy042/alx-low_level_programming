#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of the file to append to
 * @text_content: NULL-terminated string to add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

int fd;
ssize_t len = 0, written = 0;

/* filename must not be NULL */
if (filename == NULL)
return (-1);

/* open existing file for write-only, append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* if there's content, compute its length and write it */
if (text_content != NULL)
{
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
