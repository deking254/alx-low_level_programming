#include <elf.h>
#include "main.h"
#include <sys/types.h>

void validateelf(unsigned char *ident);
void class(unsigned char *e);
void magic(unsigned char *e);
void data(unsigned char *e);
void version(unsigned char *e);
void closefile(int file);
/**
 * validateelf- check the code
 * @ident: i
 * Return: Always 0.
 */
void validateelf(unsigned char *ident)
{
int i;
for (i = 0; i < 4; i++)
{
if (ident[i] != 127 &&
ident[i] != 'E' &&
ident[i] != 'L' &&
ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * validateelf- check the code
 * @e: i
 * Return: Always 0.
 */
void class(unsigned char *e)
{
printf("  Class:                             ");
switch (e[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e[EI_CLASS]);
}
}
/**
 * magic- check the code
 * @e: i
 * Return: Always 0.
 */
void magic(unsigned char *e)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e[i]);
if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * data- check the code
 * @e: i
 * Return: Always 0.
 */
void data(unsigned char *e)
{
printf("  Data:                              ");
switch (e[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e[EI_CLASS]);
}
}
/**
 * version- check the code
 * @e: i
 * Return: Always 0.
 */
void version(unsigned char *e)
{
printf("  Version:                           %d",
e[EI_VERSION]);
switch (e[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
 * closefile- check the code
 * @file: i
 * Return: Always 0.
 */
void closefile(int file)
{
if (close(file) == -1)
{
dprintf(STDERR_FILENO,
"Error: Cannot close this file fd %d\n", file);
exit(98);
}
}

/**
 * main - check the code
 * @argc: int
 * @argv:variables
 * Return: Always 0.
 */
int main(int __attribute__((__unused__))argc, char **argv)
{
int fd;
ssize_t n;
Elf64_Ehdr *hder;
fd = open(argv[1], O_RDONLY);
hder = malloc(sizeof(Elf64_Ehdr));
n = read(fd, hder, sizeof(Elf64_Ehdr));
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
if (hder == NULL)
{
closefile(fd);
dprintf(STDERR_FILENO, "Error: CanNOTt read file %s\n", argv[1]);
exit(98);
}
if (n == -1)
{
free(hder);
closefile(fd);
dprintf(STDERR_FILENO, "Error: Cannot read the  file %s\n", argv[1]);
exit(98);
}
validateelf(hder->e_ident);
magic(hder->e_ident);
class(hder->e_ident);
data(hder->e_ident);
version(hder->e_ident);
free(hder);
closefile(fd);
return (0);
}

