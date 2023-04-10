#include "main.h"
void closefilehandler(int fd);
char *createbuffer(char *file);
/**
 * main - check the code
 * @ac: content number
 * @av: pointers
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int fdfrom, fdto;
ssize_t n, l;
char *buffer;
mode_t new_umask = 0027;
mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
buffer = createbuffer(av[1]);
umask(new_umask);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
free(buffer);
exit(97); }
fdfrom = open(av[1], O_RDONLY);
n = read(fdfrom, buffer, 1024);
fdto = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
do {
if (fdfrom == -1 || n == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", av[1]);
free(buffer);
exit(98); }
l = write(fdto, buffer, n);
if (fdto == -1 || l == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", av[2]);
free(buffer);
exit(99); }
n = read(fdfrom, buffer, 1024);
fdto = open(av[2], O_WRONLY | O_APPEND);
} while (n > 0);
free(buffer);
closefilehandler(fdfrom);
closefilehandler(fdto);
return (0);
}
/**
 * closefilehandler - check the code
 * @fd: content number
 * @buffer: pointers
 * Return: Always 0.
 */
void closefilehandler(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %u\n", fd);
exit(100);
}
}
/**
 * createbuffer - check the code
 * @file: content number
 * Return: Always 0.
 */
char *createbuffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
return (buffer);
}
