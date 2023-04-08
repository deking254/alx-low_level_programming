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
char *buffer;
ssize_t i = 0;
buffer = malloc(1024);
if (buffer != NULL && filename != NULL)
{
fd = open(filename, O_RDWR);
if (fd != -1)
n = read(fd, buffer, letters);
else
return (i);
if (n != -1)
{
k = write(STDOUT_FILENO, buffer, letters);
if (k != -1 && n <= k)
{
close(fd);
free(buffer);
return (n);
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
