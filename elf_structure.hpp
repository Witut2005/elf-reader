
#include <stdint.h>

class elf_format
{
    
    struct elf_header
    {
        char elf_magic[4];
    uint8_t e_ident_class;
    uint8_t e_ident_data;
    uint8_t e_ident_version;
    uint8_t e_ident_osabi;
    uint8_t e_ident_abiversion;
    uint8_t e_ident_pad;
    uint8_t e_type;
    uint8_t e_machine;
    uint8_t e_version;
    uint8_t e_entry;
    uint8_t e_phoff;
    uint8_t e_shoff;
    uint8_t e_flags;
    uint8_t e_ehsize;
    uint8_t e_phentsize;
    uint8_t e_phnum;
    uint8_t e_shentsize;
    uint8_t e_shnum;
    }



}elf;
