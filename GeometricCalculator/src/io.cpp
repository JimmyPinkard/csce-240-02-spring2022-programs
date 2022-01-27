#include <fstream>

#include "headers/io.h"
#include "headers/common.h"

std::string read_file(const std::string &path)
{
    std::ifstream file(path);
    if(!file.is_open())
    {
        fatal("Couldn't open file");
    }
    std::string contents, buffer;
    while(std::getline(file, buffer))
    {
        contents += buffer + '\n';
    }
    file.close();
    return contents;
}

void write_file(const std::string &path, const std::string &contents)
{
    std::ofstream file(path);
    if(!file.is_open())
    {
        fatal("Couldn't create/open file");
    }
    file << contents;
    file.close();
}