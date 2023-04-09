#include "main.h"

/**
 * main - check the code
 * @ac: content number
 * @av: pointers
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int fdfrom, fdto, c, cc;
ssize_t n, l;
char buffer[1024];
mode_t perm = 0664;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
fdfrom = open(av[1], O_RDWR);
fdto = open(av[2], O_RDWR |O_CREAT | O_TRUNC, perm);
n = read(fdfrom, buffer, 1024);
if (av[1] != NULL && n != -1 && fdfrom != -1)
{
l = write(fdto, buffer, n);
if (l != -1 && fdto != -1)
{
c = close(fdto);
cc = close(fdfrom);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fdto);
exit(100); }
if (cc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fdfrom);
exit(100); }
}
else
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", av[2]);
exit(99); }
}
else
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98); }
return (0); }
