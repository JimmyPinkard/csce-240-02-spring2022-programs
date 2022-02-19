#include <string>
#include <iostream>
#include "headers/io.h"

int main()
{
    std::string data = read_file("data.txt");
    std::cout << data;
	return 0;
}