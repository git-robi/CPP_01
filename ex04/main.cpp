#include <iostream>
#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "Error: Program requires exactly 3 arguments" << std::endl;
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    FileReplacer replacer(argv[1], argv[2], argv[3]);
    if (!replacer.replaceContent()) {
        return 1;
    }

    return 0;
}