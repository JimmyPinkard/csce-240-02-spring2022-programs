#include <string>
#include <iostream>

#include "headers/io.h"
#include "headers/JSON.h"

int main(int argc, char **argv)
{
    std::string data = read_file("data/mia.json");
    JSON json(data);
    std::cout << json.get("name");
	return 0;
}