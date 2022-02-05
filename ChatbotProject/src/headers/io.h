//
// Created by jimmy on 1/27/22.
//

#ifndef CSCE240_IO_H
#define CSCE240_IO_H
#include <string>

std::string read_file(const std::string &path);
void write_file(const std::string &path, const std::string &contents);
#endif //CSCE240_IO_H
