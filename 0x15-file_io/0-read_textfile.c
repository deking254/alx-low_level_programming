#include "main.h"

/**
 * read_textfile - check the code
 * @filename: name
 * @letters: ty
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n, k;
int fd;
void *buffer;
ssize_t i = 0;
buffer = malloc(letters);
if (buffer != NULL && filename != NULL)
{
fd = open(filename, O_RDONLY);
if (fd != -1)
{
n = read(fd, buffer, letters);
if (n != -1)
{
k = write(STDOUT_FILENO, buffer, n);
if (k != -1)
{
return (k);
free(buffer);
close(fd);
}
else
return (i);
}
else
return (i);
}
else
return (i);
}
else
return (i);
}
