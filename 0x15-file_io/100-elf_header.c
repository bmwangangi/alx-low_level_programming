#include <elf.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
                (((n << 16) >> 24) << 16) | (n >> 24))

/**
 * check - check if the file is an ELF file.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void check(unsigned char *e_ident)
{
if (*e_ident == 0x7f && *(e_ident + 1) == 'E' &&
   *(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
{
printf("ELF Header:\n");
}
else
{
dprintf(STDERR_FILENO, "Error: This file is not a valid ELF\n");
exit(98);
}
}

/**
 * magicician - Print the magic number.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void magicician(unsigned char *e_ident)
{
int a;
int limit;

limit = EI_NIDENT - 1;
printf("  Magic:   ");
for (a = 0; a < limit; a++)
printf("%02x ", *(e_ident + a));
printf("%02x\n", *(e_ident + a));
}

/**
 * classification - Print the classification  of the ELF.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void classification(unsigned char *e_ident)
{
printf("  Classification:                             ");
if (e_ident[EI_CLASS] == ELFCLASSNONE)
printf("This class is invalid\n");
else if (e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * info - Print the type of information given.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void info(unsigned char *e_ident)
{
printf("  Info:                              ");
if (e_ident[EI_DATA] == ELFDATANONE)
printf("Unknown data format\n");
else if (e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (e_ident[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * ver - Print the version of the file.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void ver(unsigned char *e_ident)
{
printf("  Version:                           ");
if (e_ident[EI_VERSION] == EV_CURRENT)
printf("%i (current)\n", EV_CURRENT);
else
printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * trab - Print the OS/ABI.
 * @e_ident: The ELF struct.
 *
 * Return: No return as it is a void function.
 */
void trab(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
printf("UNIX - System V\n");
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * data - Print the data.
 * @e_ident: The ELF struct.
 * @e_type: Data to compare and print.
 *
 * Return: No return as it is a void function.
 */
void data(unsigned int e_type, unsigned char *e_ident)
{
e_ident[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

printf("  Type:                              ");
if (e_type == ET_NONE)
printf("NONE (Unknown type)\n");
else if (e_type == ET_REL)
printf("REL (Relocatable file)\n");
else if (e_type == ET_EXEC)
printf("EXEC (Executable file)\n");
else if (e_type == ET_DYN)
printf("DYN (Shared object file)\n");
else if (e_type == ET_CORE)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", e_type);
}

/**
 * entrance - Print the entry point.
 * @e_ident: The ELF struct.
 * @e_entry: The data to print.
 *
 * Return: No return as it is a void function.
 */
void entrance(unsigned int e_entry, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_entry = REV(e_entry);

printf("  Entry point address:               ");
printf("%#x\n", (unsigned int)e_entry);
}

/**
 * main - Read an ELF file.
 * @argc: The number of args.
 * @argv: The Args.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int fd, _read, _close;
Elf64_Ehdr *elf_header;

if (argc != 2)
dprintf(STDERR_FILENO, "Usage: %s filename\n", argv[0]), exit(98);

elf_header = malloc(sizeof(Elf64_Ehdr));
if (elf_header == NULL)
dprintf(STDERR_FILENO, "Error: Unable to allocate memory\n"), exit(98);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

_read = read(fd, elf_header, sizeof(Elf64_Ehdr));
if (_read == -1)
{
free(elf_header);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
check(elf_header->e_ident);
magicician(elf_header->e_ident);
classification(elf_header->e_ident);
info(elf_header->e_ident);
ver(elf_header->e_ident);
trab(elf_header->e_ident);
printf("  ABI Version:                       %i\n", elf_header->e_ident[EI_ABIVERSION]);
data(elf_header->e_type, elf_header->e_ident);
entrance(elf_header->e_entry, elf_header->e_ident);

free(elf_header);
_close = close(fd);
if (_close == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);

return (0);
}
