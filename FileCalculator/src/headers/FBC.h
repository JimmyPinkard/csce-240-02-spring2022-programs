#ifndef CSCE240_FBC_H
#define CSCE240_FBC_H
#include <string>

void run(int argc, char **argv);
void fatal(const std::string &message);
std::string create_shape(const std::string &text);
std::string operation(const char op, int num, int num2);
//File I/O
std::string read_file(const std::string &path);
void write_file(const std::string &path, const std::string &contents);
#endif //CSCE240_FBC_H