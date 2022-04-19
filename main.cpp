

#include <fstream>
#include <cstdio>
#include "./elf_structure.hpp"

int main(int argc, char* argv[])
{

    if(argc != 2)
    {
        printf("Usage: %s file_name", argv[0]);
        exit(1);
    }

    std::fstream file;
    file.open(argv[1], std::ios::in | std::ios::binary);

    file.read(elf.elf_magic, 4);

    printf("%s\n", elf.elf_magic);


}