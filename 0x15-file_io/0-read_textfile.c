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
while ((n = read(fd, buffer, letters)) > 0)
{
k = write(STDOUT_FILENO, buffer, letters);
if (k == -1)
{
return (i);
}
else
return (k);
}
}
else
return (i);
}
return (i);
}
