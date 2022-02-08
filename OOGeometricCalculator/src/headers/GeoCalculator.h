#ifndef CSCE240_FBC_H
#define CSCE240_FBC_H
#include <string>
#include <vector>

#include "common.h"

void run(int argc, char **argv);
Shape *create_shape(const std::vector<std::string> &properties);
std::vector<std::string> parse(const std::string &text);
#endif //CSCE240_FBC_H