#include <iostream>
#include <algorithm>

#include "headers/main.h"

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        fatal("Provide a list of integers\n");
    }
    std::vector<int> vector = gen_vector(argc, argv);
    std::sort(vector.begin(), vector.end());
    print_vector(vector);
    std::flush(std::cout);
    return 0;
}

std::vector<int> gen_vector(int &argc, char **argv)
{
	const unsigned int length = argc - 1;
	std::vector<int> vector(length);
    for(int i = 0; i < length; ++i)
    {
		try
		{
			vector[i] = std::stoi(argv[i + 1], 0, 10);
		}
		catch(std::exception e)
		{
            fatal("Need to use 32-bit integers");
		}
    }
	return vector;
}

void print_vector(const std::vector<int> &vector)
{
    const unsigned int end = vector.size() - 1;
    std::string contents = "[";
	for(int i = 0; i < end; ++i)
    {
        contents.append(std::to_string(vector[i])).append(", ");
    }
    contents.append(std::to_string(vector[end])).append("]\n");
	std::cout << contents;
}

void fatal(const std::string &message)
{
    std::cerr << message << std::endl;
    std::flush(std::cerr);
    exit(1);
}