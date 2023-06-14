#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* errorPrint - Outputs error message and exits with 98.
* @errorMsg: ErrorMsg to print.
*/
void errorPrint(const char *errorMsg)
{
fprintf(stderr, "%s\n", errorMsg);
exit(98);
}

/**
* MagicBoom - Outputs the magic number of the ELF header.
* @magic: Points to the magic number array.
*/
void MagicBoom(const unsigned char *magic)
{
int k;
printf("  Magic:   ");
for (k = 0; k < EI_NIDENT; k++)
printf("%02x ", magic[k]);
printf("\n");
}

/**
* classsPrint - Outputs the class of the ELF header.
* @class: Class value.
*/
void classsPrint(uint8_t class)
{
printf("  Class:                             ");
switch (class)
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
* PrintingDa_ta - Outputs the data encoding of the ELF header.
* @data: Data encod_ing value.
*/
void PrintingDa_ta(uint8_t data)
{
printf("  Data:                              ");
switch (data)
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
* OSA_BI_printing - Outputs the OS/ABI of the ELF header.
* @osabi: OS/ABI value.
*/
void OSA_BI_printing(uint8_t osabi)
{
printf("  OS/ABI:                            ");
switch (osabi)
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %d>\n", osabi);
break;
}
}

/**
* OutputType - Prints the type of the ELF header.
* @type: The type value.
*/
void OutputType(uint16_t type)
{
printf("  Type:                              ");
switch (type)
{
case ET_NONE:
printf("No file type\n");
break;
case ET_REL:
printf("Relocatable file\n");
break;
case ET_EXEC:
printf("Executable file\n");
break;
case ET_DYN:
printf("Shared object file\n");
break;
case ET_CORE:
printf("Core file\n");
break;
default:
printf("Unknown\n");
break;
}
}

/**
* elfHeaderPrint - Outputs information in ELF header.
* @header: Points to the ELF head.
*/
void elfHeaderPrint(const Elf64_Ehdr *header)
{
printf("ELF Header:\n");
MagicBoom(header->e_ident);
classsPrint(header->e_ident[EI_CLASS]);
PrintingDa_ta(header->e_ident[EI_DATA]);
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
OSA_BI_printing(header->e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
OutputType(header->e_type);
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
* main - Starting point.
* @argc: Command-li args total.
* @argv: Command-line argument array strings.
*
* Return: 0 (success) 98 (failure)
*/
int main(int argc, char *argv[])
{
const char *myFile;
int i_fille;
Elf64_Ehdr header;

if (argc != 2)
{
errorPrint("Usage: elf_header elf_filename");
}

myFile = argv[1];
i_fille = open(myFile, O_RDONLY);
if (i_fille == -1)
{
errorPrint("Error opening file");
}

if (read(i_fille, &header, sizeof(header)) != sizeof(header))
{
errorPrint("Error reading ELF header");
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
errorPrint("File is not an ELF");
}

if (close(i_fille) == -1)
{
errorPrint("Error closing file");
}

return (0);
}
