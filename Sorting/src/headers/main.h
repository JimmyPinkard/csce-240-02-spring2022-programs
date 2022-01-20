#ifndef MAIN
#define MAIN

#include <vector>

void fatal(const std::string &message);
std::vector<int> gen_vector(int &argc, char **argv);
void print_vector(const std::vector<int> &vector);

#endif
