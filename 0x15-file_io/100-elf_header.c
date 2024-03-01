#include "main.h"


/**
 * print_elf_header - prints the elf headers
 * @filename: a pointer to the filename to print elf
 *
 * Return: void
 */

void print_elf_header(char *filename)
{
int fd;
Elf32_Ehdr elf_header;
int i;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
exit(98);
}

if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
{
fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", filename);
close(fd);
exit(98);
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", elf_header.e_ident[i]);
printf("\n");
printf("  Class:                             %s\n",
elf_header.e_ident[EI_CLASS]
== ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA]
== ELFDATA2LSB ? "2's complement,
little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n",
elf_header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
elf_header.e_ident[EI_OSABI]
== ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Unknown");
printf("  ABI Version:                       %d\n",
elf_header.e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
printf("  Entry point address:               0x%x\n", elf_header.e_entry);
close(fd);
}

/**
 * main - Entry point
 * @argc: the argument counter
 * @argv: A pointer to an array of the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

print_elf_header(argv[1]);

return (0);
}

