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
if (av[1] != NULL)
{
fdfrom = open(av[1], O_RDWR);
if (fdfrom != -1)
{
n = read(fdfrom, buffer, 1024);
if (n != -1)
{
fdto = open(av[2], O_RDWR | O_CREAT | O_TRUNC, perm);
if (fdto != -1)
{
l = write(fdto, buffer, n);
if (l != -1)
{
c = close(fdfrom);
cc = close(fdto);
if (c == -1)
{
dprintf(STDERR_FILENO,"Error: Can't close fd %u\n", fdfrom);
exit(100);
}
if (cc == -1)
{
dprintf(STDERR_FILENO,"Error: Can't close fd %u\n", fdto);
exit(100);
}
}
else
{
dprintf(STDERR_FILENO,"Error: Can't Can't write to %s\n", av[2]);
exit(98);
}
}
else
{
dprintf(STDERR_FILENO,"Error: Can't Can't write to %s\n", av[2]);
exit(98);
}
}
else
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", av[1]);
exit(98);
}
}
else
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", av[1]);
exit(98);
}
}
else
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", av[1]);
exit(98);
}
return (0);
}
