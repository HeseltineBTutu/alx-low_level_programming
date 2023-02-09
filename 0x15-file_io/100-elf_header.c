#include "main.h"

const char *get_magic(unsigned char *e_ident)
{
  if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' ||
      e_ident[3] != 'F') {
    return "not an ELF file";
  }
  return "ELF";
}

const char *get_class(unsigned char *e_ident)
{
  switch (e_ident[4]) {
  case 1:
    return "ELF32";
  case 2:
    return "ELF64";
  default:
    return "invalid class";
  }
}

const char *get_data(unsigned char *e_ident)
{
  switch (e_ident[5]) {
  case 1:
    return "little endian";
  case 2:
    return "big endian";
  default:
    return "invalid data encoding";
  }
}

const char *get_version(unsigned int e_version)
{
  switch (e_version) {
  case 0:
    return "0 (Invalid)";
  case 1:
    return "1 (Current)";
  default:
    return "invalid version";
  }
}

const char *get_os_abi(unsigned char *e_ident)
{
  switch (e_ident[7]) {
  case 0:
    return "UNIX - System V";
  case 1:
    return "UNIX - HP-UX";
  case 2:
    return "UNIX - NetBSD";
  case 3:
    return "UNIX - Linux";
  case 4:
    return "UNIX - Gnu Hurd";
  case 6:
    return "UNIX - Solaris";
  case 7:
    return "UNIX - AIX";
  case 8:
    return "UNIX - IRIX";
  case 9:
    return "UNIX - FreeBSD";
  case 10:
    return "UNIX - Tru64";
  case 11:
    return "UNIX - Novell Modesto";
  case 12:
    return "UNIX - OpenBSD";
  case 97:
    return "ARM";
  case 255:
    return "Standalone (embedded)";
  default:
    return "unknown";
  }
}

int main(int argc, char *argv[]) {
  int fd;
  ssize_t bytes_read;
  Elf32_Ehdr header;

  if (argc != 2) {
    fprintf(stderr, "Usage: %s elf_file\n", argv[0]);
    return 98;
  }

  fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    fprintf(stderr, "Error: %s\n", strerror(errno));
    return 98;
  }

  bytes_read = read(fd, &header, sizeof(header));
  if (bytes_read == -1) {
    fprintf(stderr, "Error: %s\n", strerror(errno));
    close(fd);
    return 98;
  }

  if (bytes_read != sizeof(header)) {
    fprintf(stderr, "Error: %s\n", strerror(errno));
    close(fd);
    return 98;
  }

  close(fd);

  printf("ELF Header:\n");
  printf("  Magic:   %s\n", get_magic(header.e_ident));
  printf("  Class:                             %s\n", get_class(header.e_ident));
  printf("  Data:                              %s\n", get_data(header.e_ident));
  printf("  Version:                           %s\n", get_version(header.e_version));
  printf("  OS/ABI:                            %s\n", get_os_abi(header.e_ident));
  printf("  ABI Version:                       %d\n", header.e_ident[8]);
  printf("  Type:                              %hu\n", header.e_type);
  printf("  Entry point address:               0x%x\n", header.e_entry);

  return 0;
}
