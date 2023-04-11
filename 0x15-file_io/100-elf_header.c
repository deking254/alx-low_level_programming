#include <libelf.h>
#include "main.h"

int main (int argc, char *[]argv)
{
int fd;
ELF *e;
fd = open(argv[1], O_RDONLY);
e = elf_begin(fd, ELF_C_READ, NULL);
Elf64_Ehdr *elfhdr64 = elf64_getehdr(e);
if (elfhdr64 != NULL)
{
printf("Entry point: 0x%x\n", elfhdr32->e_entry);
}
return (0);
}

