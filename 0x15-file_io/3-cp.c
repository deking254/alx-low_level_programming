#include "main.h"

void closefilehandler(int fd, char *buffer);
void readErrorhandler(char *file, char *buffer);
void writeErrorhandler(char *file, char *buffer);
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
buffer = malloc(sizeof(char) * 1024);
umask(new_umask);
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
free(buffer);
exit(97); }
fdfrom = open(av[1], O_RDWR);
n = read(fdfrom, buffer, 1024);
fdto = open(av[2], O_RDWR | O_CREAT | O_TRUNC, perm);
if (fdfrom != -1 || n != -1)
{
do {
l = write(fdto, buffer, n);
if (l == -1 || fdto == -1)
{
closefilehandler(fdto, buffer);
writeErrorhandler(av[2], buffer);
}
n = read(fdfrom, buffer, 1024);
fdto = open(av[2], O_RDWR | O_APPEND);
} while (n > 0);
closefilehandler(fdfrom, buffer);
closefilehandler(fdto, buffer); }
else
{
readErrorhandler(av[1], buffer);
closefilehandler(fdfrom, buffer); }
return (0); }
/**
 * closefilehandler - check the code
 * @fd: content number
 * @buffer: pointers
 * Return: Always 0.
 */
void closefilehandler(int fd, char *buffer)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %u\n", fd);
free(buffer);
exit(100);
}
}
/**
 * readErrorhandler - check the code
 * @file: content number
 * @buffer: pointers
 * Return: Always 0.
 */
void readErrorhandler(char *file, char *buffer)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
free(buffer);
exit(98);
}
/**
 * writeErrorhandler - check the code
 * @file: content number
 * @buffer: pointers
 * Return: Always 0.
 */
void writeErrorhandler(char *file, char *buffer)
{
dprintf(STDERR_FILENO, "Error: Can't Can't write to %s\n", file);
free(buffer);
exit(98);
}
